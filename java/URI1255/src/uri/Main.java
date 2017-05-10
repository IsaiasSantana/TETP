package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

public class Main {

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));		
		
		int casosDeTeste = Integer.valueOf(entrada.readLine());
		
		for(int i = 0; i < casosDeTeste; i++)
		{
			HashMap<Character, Integer> frequencia = new HashMap<>();
			int maiorFrequencia = 0;

			
			//a..z
			for(int ascii = 97; ascii <= 122; ascii++)
			{
				frequencia.put( ( (char)(ascii) ), 0 );
			}
			
			String texto = entrada.readLine();
			
			for(int letra = 0; letra < texto.length(); letra++)
			{
				Character caracter = texto.charAt(letra);
				
				if(Character.isLetter(caracter))
				{
					Character lowerCase = Character.toLowerCase(texto.charAt(letra));
					
					int frequenciaLetra  = frequencia.get(lowerCase);
					frequencia.put(lowerCase, frequenciaLetra + 1);
					
					frequenciaLetra  = frequencia.get(lowerCase);
					if(frequenciaLetra > maiorFrequencia)
						maiorFrequencia = frequenciaLetra;	
				}
			}
			
			for(int ascii = 97; ascii <= 122; ascii++)
			{
				
				if(frequencia.get(( (char)(ascii))) == maiorFrequencia)
				{
					System.out.print(( (char)(ascii)));
				}
				
			}
			System.out.println();
		}
	}

}
