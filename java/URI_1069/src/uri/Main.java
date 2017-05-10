package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
	
		int n = Integer.valueOf(entrada.readLine());
		
		while(n != 0)
		{
			Stack<Character> pilha = new Stack<>();
			
			String linha = entrada.readLine();
			int contaDiamantes = 0;
			

			for(int i = 0; i < linha.length(); i++)
			{
				switch (linha.charAt(i))
				{
					case '<':
						pilha.push('<');
						break;
					case '>':
						if(!pilha.isEmpty())
						{
							pilha.pop();
							contaDiamantes++;
						}
						break;
					default:
						continue;
				}
			}
			System.out.println(contaDiamantes);
			n--;
		}
	}

}
