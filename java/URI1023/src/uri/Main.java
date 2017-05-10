package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;


public class Main 
{
	static class Imovel implements Comparable<Imovel>
	{
		Imovel(Integer moradores, Integer consumo)
		{
			this.moradores = moradores;
			this.consumo = (int) Math.floor(consumo / moradores);
		}
		
		Integer moradores;
		Integer consumo;
		
		@Override
		public int compareTo(Imovel o)
		{
			return consumo.compareTo(o.consumo);
		}
	}
	
	public static void main(String[] args) throws IOException
	{

		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		int cidade = 1;
		

		boolean emBraco  = false;
		
		while(true)
		{
			
			
			HashMap<Integer, Integer> map = new HashMap<>();
			ArrayList<Integer> keys = new ArrayList<>();
			
			double mediaConsumo = 0.00;
			int somaMoradores = 0;
			int somaConsumo = 0;
			
			int n = Integer.valueOf(entrada.readLine());
			
			if(n == 0) break;
			else
				if (emBraco) System.out.println();
			
			for(int i = 0; i < n; i++)
			{
				String[] imovel = entrada.readLine().split("[ ]");
				
				int moradores = Integer.valueOf(imovel[0]);
				int consumo = Integer.valueOf(imovel[1]);
				
				somaConsumo+=consumo;
				somaMoradores+=moradores;
				int key = (int) (Math.floor(consumo/moradores));
				
				if(map.isEmpty())
				{
					map.put(key, moradores);
					keys.add(key);
				}
				else if(map.containsKey(key))
				{
					int value = map.get(key);
					value+=moradores;
					map.put(key, value);
				}
				else
				{
					keys.add(key);
					map.put(key, moradores);
				}
				
			}
			

			mediaConsumo = (((double)somaConsumo / somaMoradores));
			
		System.out.println("Cidade# "+(cidade++)+":");
			
			Collections.sort(keys);
			
			for(Integer key : keys)
			{
				System.out.printf("%d-%d ",map.get(key),key);
			}
			System.out.println();
			DecimalFormat df = new DecimalFormat(".00");
			df.setRoundingMode(RoundingMode.DOWN);
		//	mediaConsumo = Double.valueOf(df.format(mediaConsumo).replaceAll(",", "."));
			
			System.out.printf("Consumo medio: %s m3.\n",df.format(mediaConsumo));
			
			emBraco = true;
			 
		}
	
		entrada.close();
	}
}



