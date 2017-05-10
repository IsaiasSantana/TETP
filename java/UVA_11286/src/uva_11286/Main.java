package uva_11286;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;

public class Main {

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		
		HashMap<ArrayList<Integer>, Integer> cursos = new HashMap<>();
		
		String line = null;
		int maior = 1;
		
		while(!(line = entrada.readLine()).equals("0"))
		{
			int combinacaoCursos = Integer.valueOf(line);
			
			maior = 1;
			cursos.clear();
			
			for(int i = 0; i < combinacaoCursos; i++)
			{
				String[] cursosLinha = entrada.readLine().split("[ ]");
				ArrayList<Integer> totalCursos = new ArrayList<>();
			
				for(int j = 0; j < cursosLinha.length; j++)
				{
					totalCursos.add(Integer.valueOf(cursosLinha[j]));
				}
				
				Collections.sort(totalCursos);
				
				if(cursos.containsKey(totalCursos))
				{
					
					cursos.put(totalCursos,cursos.get(totalCursos)+1);
				}
				else
				{
					cursos.put(totalCursos,1);
				}
			}
			
			ArrayList<Integer> popularidades = new ArrayList<>(cursos.values());
			Collections.sort(popularidades);
			maior = popularidades.remove(popularidades.size()-1);
			int total = maior;
			
			for(Integer i: popularidades)
			{
				if(i == maior) total+=maior;
			}
			
			
			System.out.println(total);
		}
		
		entrada.close();
	}
}
