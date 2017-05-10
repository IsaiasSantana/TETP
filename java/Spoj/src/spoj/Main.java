package spoj;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;

public class Main {

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		
		ArrayList<Integer> fila = new ArrayList<>();
		
		
		int n = Integer.valueOf(entrada.readLine());
		
		for(int i = 0; i < n; i++)
		{
			String consulta[] = entrada.readLine().split("[ ]");
			
			if(consulta[0].equals("toFront"))
			{
				fila.add(0,Integer.valueOf(consulta[1]));
				continue;
			}
			
			if(consulta[0].equals("back"))
			{
				if(!fila.isEmpty())
				{
					System.out.println(fila.remove((fila.size()-1)));
				}else{
					System.out.println("No job for Ada?");
				}
				continue;
			}
			 if(consulta[0].equals("front"))
			{
				if(!fila.isEmpty())
				{
					System.out.println(fila.remove(0));
				}else{
					System.out.println("No job for Ada?");
				}
				continue;
			}
			 if(consulta[0].equals("reverse"))
			{
				if(!fila.isEmpty())
				{
			
					Collections.reverse(fila);
				}
				continue;
			}
			
			if(consulta[0].equals("push_back"))
			{
				fila.add(fila.size(), Integer.valueOf(consulta[1]));
				continue;
			}
						
			
		}
		
	}

}
