package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;

public class Main
{	
	public static void main(String[] args) throws IOException
	{
		
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		ArrayDeque<Integer> deque = new  ArrayDeque<>();
		
		while(true)
		{
			int n = Integer.valueOf(entrada.readLine());
			deque.clear();
			
			if(n == 0) break;
			
			for(int i = 1; i <= n; i++)
			{
				deque.add(i);
			}
			
			System.out.print("Discarded cards: ");
			while(deque.size() > 1)
			{
				if(deque.size() > 2) System.out.print(deque.getFirst()+", ");
				else
				{
					System.out.print(deque.getFirst());
					System.out.println();
				}
				
				deque.removeFirst();
				deque.add(deque.getFirst());
				deque.removeFirst();
			}
			System.out.println("Remaining card: "+deque.getFirst());
		}
	}
	
}
