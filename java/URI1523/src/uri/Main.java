package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

class Pontos
{
	int horaChegada, horaSaida;
	
	Pontos(int horaChegada, int horaSaida)
	{
		this.horaChegada = horaChegada;
		this.horaSaida = horaSaida;
	}
}

/**
 * 
 * @author isaias
 *
 *
Skip to content
This repository
Search
Pull requests
Issues
Gist
 @IsaiasSantana
 Sign out
 Watch 15
  Star 50
 Fork 19 juanplopes/icpc
 Code  Pull requests 0  Projects 0  Pulse  Graphs
Branch: master Find file Copy pathicpc/uri/1523.cpp
2686d50  on 4 Mar 2014
@juanplopes juanplopes uri contest
1 contributor
RawBlameHistory    
48 lines (38 sloc)  905 Bytes
//1523
//Linear Parking Lot
//Misc;Beginner
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct Car {
    int a, b;
    Car(int a, int b) : a(a), b(b) {}
};

stack<Car> S;
vector<Car> V;

int main() {
    int n, k;
    while(cin >> n >> k, n||k) {
        bool A = true;
        V.clear();
        
        for(int i=0; i<n; i++) {
            int a, b; cin >> a >> b;
            
            int time = 0;
            while(S.size() > 0 && a>=S.top().b) {
                A &= S.top().b >= time;
                time = S.top().b;
                S.pop();
            }
            
            A &= S.size() < k;
            S.push(Car(a, b));
        }
        
        int time = 0;
        while(S.size() > 0) {
            A &= S.top().b >= time;
            time = S.top().b;
            S.pop();
        }
        
        cout << (A?"Sim":"Nao") << endl;
    }
}

Contact GitHub API Training Shop Blog About
© 2017 GitHub, Inc. Terms Privacy Security Status Help
 */

public class Main 
{

	public static void main(String[] args) throws IOException
	{
		BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
		Stack<Pontos> carros = new Stack<>();
		while(true)
		{
			
			carros.clear();
			String[] line = entrada.readLine().split("[ ]");
			boolean estaciona = true;
			
			int n = Integer.valueOf(line[0]);
			int k = Integer.valueOf(line[1]);
			
			if( n== 0 && k == 0) break;
			
			for(int i = 0; i < n; i++)
			{
				line = entrada.readLine().split("[ ]");
				
				int horaChegada = Integer.valueOf(line[0]);
				int horaSaida = Integer.valueOf(line[1]);
				
	
				
				
					
					int hora = 0;
					while(carros.size() > 0 && horaChegada >= carros.peek().horaSaida)
					{
						estaciona = carros.peek().horaSaida >= hora;
						hora = carros.peek().horaSaida;
						carros.pop();
					}
					estaciona = carros.size() < k;
									
								
				carros.push(new Pontos(horaChegada,horaSaida));
				
			}
			
	        int time = 0;
	        while(carros.size() > 0) {
	            estaciona = carros.peek().horaSaida >= time;
	            time = carros.peek().horaSaida;
	            carros.pop();
	        }
			
			if(estaciona)
			{
				System.out.println("Sim");
			}
			else{
				System.out.println("Nao");
			}
		}
	}
}
