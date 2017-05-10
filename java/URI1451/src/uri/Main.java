package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		
		String texto = "";
		
		while((texto = entrada.readLine()) != null)
		{
			StringBuffer sb = new StringBuffer();
			boolean bijuInicio = false;
			int inicio = 0;
			
			for(int i = 0; i < texto.length(); i++)
			{
				  char caractere = texto.charAt(i);
	                
				  switch (caractere) 
				  {
	                
	                case '[': //home inicio do texto
	                {
	                	bijuInicio = true;
	                    inicio=0;
	                    break;
	                }
	                 
	                case ']': // end final do texto.
	                	bijuInicio = false;
	                    break;
	                    
	                default:
	                    if (bijuInicio) //coloca o caracter no inicio do texto
	                    {
	                        sb.insert(inicio++, caractere); // insere no inicio e desloca o restante.
	                    }
	                    else 
	                    {
	                        sb.append(caractere); // insere no final
	                    }
	               }
			}
			
			System.out.println(sb.toString());
			
		}
	}

}
