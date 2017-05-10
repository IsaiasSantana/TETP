package uri_1763;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

/**
 * 
 * @author Isaías Santana.
 * @since 27/04/2017 on 23:11
 * @email isds.santana@gmail.com
 */
public class Main 
{

	public static void main(String[] args)  throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
	
		HashMap<String, String> idiomas = new HashMap<>();

		
		String line = null;
		
		while((line = entrada.readLine()).length() > 0)
		{
				String[] idioma = line.split("[ ]");
				
				idiomas.put(idioma[1], idioma[0]);
		}
		
		while((line = entrada.readLine()) != null)
		{
			if(idiomas.containsKey(line))
			{
				System.out.println(idiomas.get(line));
			}
			else{
				System.out.println("eh");
			}
		}
		
		entrada.close();
	}
		
}


