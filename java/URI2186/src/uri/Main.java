package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;



public class Main 
{
	public static int getTotalOcorrenciasCaracter(char[] caracteres,char a, int inicio, int fim)
	{
		int totalOcorrencias = 0;
		
		for(int i = inicio-1; i <= fim-1; i++)
		{
			if(caracteres[i] == a)
			{
				totalOcorrencias++;
			}
			
		}
		return totalOcorrencias;
		
	}
	
	public static int[] primeiraUltimaOcorrencia(char caracter,char[] caracteres,int a, int b)
	{
		int indices[] = {-1,-1};
		
		for(int i = a-1; i <= b-1; i++)
		{
			if(caracter == caracteres[i])
			{
				indices[0] = i+1;
				break;
			}
			else if((i == b-1) && (caracter == caracteres[i]))
			{
				indices[0] = i+1;
				indices[1] = i+1;
				return indices;
			}
		}
		
		if(indices[0] == -1) return indices;
		
		for(int i = b-1; i >= a-1; i--)
		{
			if(caracter == caracteres[i])
			{
				indices[1] = i+1;
				break;
			}
		}
		
		return indices;
	}
	
	public static void reverso(StringBuilder sb, int inicio, int fim)
	{
		sb.replace(inicio-1, fim, new StringBuilder(sb.substring(inicio-1,fim)).reverse().toString());
	}
	
	public static void insert(StringBuilder sb, int inicio,String s)
	{
		sb.insert(inicio-1,s,0,1);
	}
	
	public static void main(String[] args) throws IOException
	{
		ArrayList<Integer> op1 = new ArrayList<>();
		ArrayList<String> op2 = new ArrayList<>();
		
		HashMap<Character, ArrayList<Integer>> listaLetras = new HashMap<>();
		
		StringBuilder b = new StringBuilder();
		
		int l = 0, n = 0;
		String s = new String();
		
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		
		String entradaLinha = entrada.readLine();
		String pedacos[] = entradaLinha.split("[ ]");
		
		l = Integer.valueOf(pedacos[0]);
		n = Integer.valueOf(pedacos[1]);
		
		s = entrada.readLine();
		b.append(s);
		
		for(int i = 0; i < s.length(); i++)
		{
			listaLetras.put(s.charAt(i), new ArrayList<Integer>());
		}
		
		for(int i = 0; i < n; i++)
		{
			String linha = entrada.readLine();
			String split[] = linha.split("[ ]");
			
			switch(Integer.valueOf(split[0]))
			{
				case 1:
					int totalOcorrencias = Main.getTotalOcorrenciasCaracter(b.toString().toCharArray(), split[3].charAt(0), Integer.valueOf(split[1]), Integer.valueOf(split[2]));
					op1.add(totalOcorrencias);
				//	System.out.println(totalOcorrencias);
					break;
				
				case 2:
				//	int ocorrencias[] = Main.primeiraUltimaOcorrencia(split[3].charAt(0),b.toString().toCharArray(), Integer.valueOf(split[1]), Integer.valueOf(split[2]));
					
					int indiceInicio = b.indexOf(split[3],Integer.valueOf(split[1])-1);
					int indiceFim = b.lastIndexOf(split[3], Integer.valueOf(split[2]));
					
					if(indiceInicio != indiceFim)
					{
						op2.add((indiceInicio+1)+" "+(indiceFim+1));
					}else op2.add("-1");
					
				//	System.out.println((indiceInicio)+" "+(indiceFim));
					break;
				
				case 3:
					Main.reverso(b, Integer.valueOf(split[1]),Integer.valueOf(split[2]));
				//	System.out.println(b.toString());
					break;
				
				case 4:
					Main.insert(b, Integer.valueOf(split[1]), split[2]);
					//System.out.println(b.toString());
					break;
			}
		}
		
		for(Integer i: op1)
		{
			System.out.println(i);
		}
		for(String string:op2)
		{
			System.out.println(string);
		}
		System.out.println(b.toString());
		entrada.close();
	}
}