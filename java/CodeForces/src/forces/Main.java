package forces;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main 
{
	
	public static void main(String[] args)  throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		String palavra = entrada.readLine();
		
		int contaMaiuscula = 0;
		int contaMinuscula = 0;
		
		for(int i = 0; i < palavra.length(); i++)
		{
			if(Character.isUpperCase(palavra.charAt(i)))
			{
				contaMaiuscula++;
			}
			else{
				contaMinuscula++;
			}
		}
		
		if(contaMaiuscula == contaMinuscula)
		{
			System.out.println(palavra.toLowerCase());
		}
		else if(contaMaiuscula > contaMinuscula)
		{
			System.out.println(palavra.toUpperCase());
		}
		else{
			System.out.println(palavra.toLowerCase());
		}
		
		
	}
}
