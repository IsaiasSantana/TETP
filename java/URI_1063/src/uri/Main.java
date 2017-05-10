package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main 
{

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		
		while(true)
		{
			Stack<String> pilha = new Stack<>();
			
			int n = Integer.valueOf(entrada.readLine());
			if(n == 0 ) break;
			
			String[] ladoA = entrada.readLine().split("[ ]");
			String[] ladoB = entrada.readLine().split("[ ]");
					
			int i = 0, j = 0;
			
			while(true)
			{
				if(j < n && !pilha.isEmpty() && pilha.peek().equals(ladoB[j]))
				{
					pilha.pop();
					System.out.print("R");
					j++;
				}
				else if (i < n)
				{
					System.out.print("I");
					pilha.push(ladoA[i++]);
				}
				else break;
				
			}
			
			
			
			if(!pilha.isEmpty()){
				System.out.println(" Impossible");
			}
			else System.out.println();
			
			pilha.clear();
			pilha = null;
		}
		
		entrada.close();
	}

}
