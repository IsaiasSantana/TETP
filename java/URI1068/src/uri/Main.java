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
		
		Stack<String> pilha = new Stack<>();
		//Stack<String> pilha2 = new Stack<>();
		

		String expressao;
		
		while(true)
		{
			 expressao = entrada.readLine();
			if(expressao == null) break;
			 
			laço:
			for(int j = 0; j < expressao.length(); j++)
			{
				switch(expressao.charAt(j))
				{
					case '(':
						pilha.push("(");
						break;
					case ')':
						if(pilha.isEmpty()){
							pilha.push(")");
							break laço;
						}
						else{
							pilha.pop();
						}
						break;
				}
			}
			
//			while(!pilha.isEmpty() && !pilha2.isEmpty())
//			{
//				pilha.pop();
//				pilha2.pop();
//			}
			
			if(pilha.isEmpty())
			{
				System.out.println("correct");
			}else{
				System.out.println("incorrect");
			}
			
			pilha.clear();
		//	pilha2.clear();
		}
		entrada.close();
	}
}
