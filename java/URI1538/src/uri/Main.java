package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));		
		
		int n  = Integer.valueOf(entrada.readLine());
		final String[] casos = {"A","B","C","D"};

		
		while(n != 0)
		{
			 StringBuffer sb = new StringBuffer();
			
			 int quadrado = n * n;
			 do
			 {
				 sb.append(casos[quadrado%4]);
				 quadrado = quadrado / 4;
			 }
			 while(quadrado != 0);
			
			 sb.reverse();
			 System.out.println(sb.toString());
			 sb = null;
			
			 n  = Integer.valueOf(entrada.readLine());
			
		}
		
		entrada.close();
		
	}

}
