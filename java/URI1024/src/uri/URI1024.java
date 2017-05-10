package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class URI1024 {

	public static void main(String[] args) throws IOException
	{

		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		ArrayList<String> saida = new ArrayList<>();
				
		int n = Integer.valueOf(entrada.readLine());
		
		for(int i = 0; i < n; i++)
		{
			String  texto = entrada.readLine();
			
			StringBuffer sb = new StringBuffer();
			
			for(int letra = 0; letra < texto.length(); letra++)
			{
				char caracter = texto.charAt(letra);
				
				if(Character.isLetter(caracter))
				{
					sb.append(((char)(caracter+3)));
				}
				else
				{
					sb.append(caracter);
				}
				
			}
			
			sb = sb.reverse();
			
			for(int letra = sb.length()/2; letra < sb.length(); letra++)
			{
				char caracter = sb.charAt(letra);
				
				sb.replace(letra, letra+1,""+((char)(caracter-1)));
				
			}
			saida.add(sb.toString());
			
			sb = null;
			
		}
		
		for(String s: saida)
		{
			System.out.println(s);
		}
		
		entrada.close();

	}

}
