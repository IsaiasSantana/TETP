package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Stack;

public class Main {

	public static void main(String[] args)  throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		
		HashMap<Character, Integer> prioOperadores = new HashMap<>();
		
		prioOperadores.put('-', 1);
		prioOperadores.put('+', 1);
		prioOperadores.put('*', 3);
		prioOperadores.put('/', 3);
		prioOperadores.put('^', 4);
		prioOperadores.put('(', 0);
		int n = Integer.valueOf(entrada.readLine());
		
		while(n != 0)
		{
			Stack<Character> pilha = new Stack<>();
			String linha = entrada.readLine();
			
			for(int i = 0; i < linha.length(); i++)
			{
				switch(linha.charAt(i))
				{
					case '+':
					case '-':
					case '*':
					case '/':
					case '^':					
					case '(':
					case ')':
					{
						
						if(pilha.isEmpty() || linha.charAt(i) == '(')
						{
							pilha.push(linha.charAt(i));
						}
						
						else if(linha.charAt(i)==')')
						{
							while(!pilha.isEmpty()&& !pilha.peek().equals('('))
							{
								System.out.print(pilha.pop());
							}
							pilha.pop();
						}
						else
						{
							while(!pilha.isEmpty() && prioOperadores.get(linha.charAt(i)) <= prioOperadores.get(pilha.peek()))
							{
								System.out.print(pilha.pop());
							}
							pilha.push(linha.charAt(i));
						}
						
						break;
					}
						
					default:
						System.out.print(linha.charAt(i));
						break;
						
				}
			}
			
			while(!pilha.isEmpty()){
				System.out.print(pilha.pop());
			}
			System.out.println();
			n--;
		}
		
		entrada.close();
	}

}
