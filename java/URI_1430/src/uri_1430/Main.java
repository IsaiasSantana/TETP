package uri_1430;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

public class Main {

	public static void main(String[] args)throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		
		final HashMap<Character, Double> notasDisponiveis = new HashMap<>();
		
		notasDisponiveis.put(new Character('W'), 1.0);
		notasDisponiveis.put(new Character('H'), 1.0/2.0);
		notasDisponiveis.put(new Character('Q'), 1.0/4.0);
		notasDisponiveis.put(new Character('E'), 1.0/8);
		notasDisponiveis.put(new Character('S'), 1.0/16);
		notasDisponiveis.put(new Character('T'), 1.0/32);
		notasDisponiveis.put(new Character('X'), 1.0/64);
		
		
		String s = null;
	
		while(!(s = entrada.readLine()).equals("*"))
		{
			int totalNotas = 0;
			double somaNotas = 0.0;
			
			for(int i = 0; i < s.length(); i++)
			{
				char c = s.charAt(i);

				if(c == '/')
				{
					int j = i + 1;
					
					while(j < s.length() && ( (c = s.charAt(j)) != '/' ))
					{
						somaNotas+=notasDisponiveis.get(c);
						j++;
					}
					
					if(somaNotas == 1.0) totalNotas++;
					
					i = j-1; // otimização, i avança para o próximo compasso. 
					
				}
				
				somaNotas = 0.0;
			}
			
			System.out.println(totalNotas);
		}
		
		entrada.close();
	}

}