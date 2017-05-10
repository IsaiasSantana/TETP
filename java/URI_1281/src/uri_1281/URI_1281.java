package uri_1281;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

public class URI_1281 {

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
	
		HashMap<String, Double> produtosVenda = new HashMap<>();
		
		int totalCasos = Integer.parseInt(entrada.readLine());
		
		for(int i = 0; i < totalCasos; i++)
		{
			double valorTotalCompra = 0.0;
			
			int totalProdutosNaVenda = Integer.parseInt(entrada.readLine());
			

			for(int j = 1; j <= totalProdutosNaVenda; j++)
			{
				String[] produto = entrada.readLine().split("[ ]");
				produtosVenda.put(produto[0], Double.parseDouble(produto[1]));
			}
			
			int totalProdutosComprados = Integer.parseInt(entrada.readLine());
			
			for(int k = 1; k <= totalProdutosComprados; k++)
			{
				String[] produto = entrada.readLine().split("[ ]");
				valorTotalCompra+=produtosVenda.get(produto[0])*Double.parseDouble(produto[1]);
			}
			
			System.out.println(String.format("R$ %.2f", valorTotalCompra));
			
			produtosVenda.clear();
		}
		
		entrada.close();
	}

}
