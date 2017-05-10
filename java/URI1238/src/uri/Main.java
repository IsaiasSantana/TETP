package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
	
		
		int n = Integer.valueOf(entrada.readLine());
		
		for(int casos = 0; casos < n; casos++)
		{
			StringBuffer saida = new StringBuffer();
			
			String[] strings = entrada.readLine().split("[ ]");
		
			
			int i = 0;
			int j = 0;
			
			int maxI = strings[0].length();
			int maxJ = strings[1].length();
			
			while(i < maxI && j < maxJ)
			{
				saida.append(strings[0].charAt(i++)).append(strings[1].charAt(j++));
			}
			
			while(i < maxI)
			{
				saida.append(strings[0].charAt(i));
				i++;
			}
			
			while(j < maxJ)
			{
				saida.append(strings[1].charAt(j));
				j++;
			}
			System.out.println(saida.toString());
			saida = null;
		}
		
//		for(String s: saidas)
//		{
//			System.out.println(s);
//		}
		//entrada.close();
		
	}

}
