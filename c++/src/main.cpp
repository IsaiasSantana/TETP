/////////////////////////*
//////////////////////// * main.cpp
//////////////////////// *
//////////////////////// *  Created on: 06/01/2017
//////////////////////// *      Author: isaias
//////////////////////// */
////////////////////////#include <iostream>
////////////////////////#include<iomanip>
////////////////////////
////////////////////////using namespace std;
////////////////////////
//////////////////////////int main()
//////////////////////////{
//////////////////////////		long long altura = 0;
//////////////////////////		long long largura = 0;
//////////////////////////		long long area = 0;
//////////////////////////
//////////////////////////		cin >> altura >> largura >> area;
//////////////////////////
//////////////////////////		long long answer = ((altura / area) + (altura % area == 0 ? 0 : 1) ) * ((largura/area)+(largura%area == 0 ? 0 : 1));
//////////////////////////		cout << answer<< endl;
//////////////////////////
//////////////////////////
//////////////////////////    return 0;
//////////////////////////}
////////////////////////
////////////////////////
//////////////////////////int main()
//////////////////////////{
//////////////////////////	int contaResposta = 0;
//////////////////////////	int resposta = 0;
//////////////////////////	int palpite[5];
//////////////////////////
//////////////////////////	cin >> resposta;
//////////////////////////
//////////////////////////	cin >> palpite[0] >> palpite[1] >> palpite[2] >> palpite[3] >> palpite[4];
//////////////////////////
//////////////////////////	for(int i = 0; i < 5; i++)
//////////////////////////		if(palpite[i] == resposta)
//////////////////////////			contaResposta+=1;
//////////////////////////
//////////////////////////	cout << contaResposta<<endl;
//////////////////////////
//////////////////////////
//////////////////////////	return 0;
//////////////////////////}
////////////////////////
////////////////////////#define COMPRIMENTO 100
////////////////////////
////////////////////////
////////////////////////int totalDeMatrizes = 0;
////////////////////////int contador = 0;
////////////////////////int comprimento = 0;
////////////////////////int inicio = 0;
////////////////////////int fim = 0;
////////////////////////int comprimentoMatriz = 0;
////////////////////////int matrizQuadrada[COMPRIMENTO][COMPRIMENTO];
////////////////////////
////////////////////////void setValues()
////////////////////////{
////////////////////////	cin >> comprimentoMatriz;
////////////////////////	comprimento = comprimentoMatriz;
////////////////////////	inicio = 0;
////////////////////////	fim = comprimentoMatriz-1;
////////////////////////	contador = 0;
////////////////////////}
////////////////////////
////////////////////////int main()
////////////////////////{
////////////////////////
////////////////////////	setValues();
////////////////////////
////////////////////////	while(comprimento != 0)
////////////////////////	{
////////////////////////		while(comprimentoMatriz > 0)
////////////////////////		{
////////////////////////			for(int i = inicio; i <= fim ; i++)
////////////////////////			{
////////////////////////				for(int j = inicio; j <= fim; j++)
////////////////////////				{
////////////////////////					if((i == inicio || i == fim) || (j == inicio || j == fim))
////////////////////////					{
////////////////////////						matrizQuadrada[i][j] = contador+1;
////////////////////////					}
////////////////////////				}
////////////////////////			}
////////////////////////			inicio+=1;
////////////////////////			fim-=1;
////////////////////////			comprimentoMatriz-=2;
////////////////////////			contador+=1;
////////////////////////		}
////////////////////////
////////////////////////		for(int i = 0; i < comprimento; i++)
////////////////////////		{
////////////////////////			for(int j = 0; j < comprimento; j++)
////////////////////////			{
////////////////////////				if(j == comprimento-1)
////////////////////////					cout << setw(3) << matrizQuadrada[i][j] << "";
////////////////////////				else
////////////////////////					cout << setw(3) << matrizQuadrada[i][j] << " ";
////////////////////////			}
////////////////////////
////////////////////////			cout << endl;
////////////////////////		}
////////////////////////
////////////////////////		cout << endl;
////////////////////////
////////////////////////		setValues();
////////////////////////	}
////////////////////////
////////////////////////	return 0;
////////////////////////}
//////////////////////#include <iostream>
//////////////////////
//////////////////////using namespace std;
//////////////////////
//////////////////////int remaining(int n, int k) {
//////////////////////    int r = 0;
//////////////////////    for (int i = 1; i < n; i++)
//////////////////////    {
//////////////////////        r = (r + k) % i;
//////////////////////        cout << r << " ";
//////////////////////    }
//////////////////////
//////////////////////    return r;
//////////////////////}
//////////////////////int main() {
//////////////////////
//////////////////////    /**
//////////////////////     * Escreva a sua solução aqui
//////////////////////     * Code your solution here
//////////////////////     * Escriba su solución aquí
//////////////////////     */
//////////////////////	cout << remaining(17,7) << endl;
//////////////////////    int numberCase = 0;
//////////////////////	int numberPeoples = 0;
//////////////////////	int numberDeath = 1;
//////////////////////	int cont = 1;
//////////////////////
//////////////////////
//////////////////////		cin >> numberPeoples;
//////////////////////
//////////////////////		int total = 2;
//////////////////////		int resp = 1;
//////////////////////		while(true)
//////////////////////		{
//////////////////////			while(total < numberPeoples)
//////////////////////			{
//////////////////////				resp = (resp + (numberDeath-1))%total++;
//////////////////////			}
//////////////////////
//////////////////////			if(resp == 13) break;
//////////////////////			else	numberDeath++;
//////////////////////				total = 2;
//////////////////////				resp = 1;
//////////////////////
//////////////////////		}
//////////////////////
//////////////////////		cout << numberDeath<< endl;
//////////////////////
//////////////////////    return 0;
//////////////////////}
////////////////////
////////////////////#include <stdio.h>
////////////////////
////////////////////int remaining(int n, int k) {
////////////////////    int r = 0;
////////////////////    for (int i = 1; i < n; i++)
////////////////////        r = (r + k) % i;
////////////////////
////////////////////    return r;
////////////////////}
////////////////////
////////////////////int main(){
////////////////////    int n, x, y, j, num, pulo;
////////////////////    while(1){
////////////////////           scanf("%d",&n);
////////////////////           if(n == 0) break;
////////////////////           y = 1;
////////////////////           for(;;){
////////////////////                   if(remaining(n,y) != 11) y++;
////////////////////                   else break;
////////////////////           }
////////////////////           printf("%d\n",y);
////////////////////    }
////////////////////    return 0;
////////////////////}
//////////////////
//////////////////
//////////////////#include <stdio.h>
//////////////////
//////////////////int flavious(int x, int y){
//////////////////    if(x == 1) return 1;
//////////////////    return (flavious(x-1,y)+y-1)%x+1;
//////////////////}
//////////////////
//////////////////int main(){
//////////////////	printf("%d\n",flavious(17,7));
//////////////////    int n, x, y;
//////////////////    while(1){
//////////////////           scanf("%d",&n);
//////////////////           if(n == 0) break;
//////////////////           y = 1;
//////////////////           for(;;){
//////////////////                   if(flavious(n-1,y) == 12) break;
//////////////////                   else y++;
//////////////////           }
//////////////////           printf("%d\n",y);
//////////////////    }
//////////////////    return 0;
//////////////////}
////////////////
//////////////////#include<stdio.h>
//////////////////
//////////////////int main() {
//////////////////
//////////////////    /**
//////////////////     * Escreva a sua solução aqui
//////////////////     * Code your solution here
//////////////////     * Escriba su solución aquí
//////////////////     */
//////////////////
//////////////////	for(int i = 1; i < 100; i++)
//////////////////		printf(" %d", 4*i -1);
//////////////////
//////////////////	printf("\n");
//////////////////
//////////////////    int numberCase = 0;
//////////////////	int numberStates = 1;
//////////////////
//////////////////	scanf("%d",&numberCase);
//////////////////
//////////////////	while(numberCase > 0)
//////////////////	{
//////////////////
//////////////////		int total = 2;
//////////////////		int result = 1;
//////////////////		numberStates = 1;
//////////////////
//////////////////		while(true)
//////////////////		{
//////////////////			while(total < numberCase)
//////////////////			{
//////////////////				result = (result + (numberStates-1))%(total++) + 1;
//////////////////			}
//////////////////			if(result == 12) break;
//////////////////			else
//////////////////			{
//////////////////				numberStates++;
//////////////////				total = 2;
//////////////////				result = 1;
//////////////////			}
//////////////////		}
//////////////////		printf("%d\n",numberStates);
//////////////////		scanf("%d",&numberCase);
//////////////////	}
//////////////////    return 0;
//////////////////}
////////////////
////////////////#include <iostream>
////////////////
////////////////using namespace std;
////////////////
////////////////int main() {
////////////////
////////////////    /**
////////////////     * Escreva a sua solução aqui
////////////////     * Code your solution here
////////////////     * Escriba su solución aquí
////////////////     */
////////////////
////////////////    int numberCase = 0;
////////////////	int numberPeoples = 0;
////////////////	int numberDeath = 0;
////////////////	int cont = 1;
////////////////
////////////////	cin >> numberCase;
////////////////
////////////////	while(numberCase > 0)
////////////////	{
////////////////		cin >> numberPeoples >> numberDeath;
////////////////
////////////////		int total = 2;
////////////////		int resp = 1;
////////////////
////////////////		while(total <= numberPeoples)
////////////////		{
////////////////			resp = (resp + (numberDeath-1))%(total++)+1;
////////////////		}
////////////////
////////////////		cout << "Case "<<cont++ << ": " << resp<< endl;
////////////////		resp = 1;
////////////////		--numberCase;
////////////////	}
////////////////    return 0;
////////////////}
//////////////
//////////////
//////////////#include<stdio.h>
//////////////using namespace std;
//////////////#define MAX 500
//////////////
//////////////int invertNumber(long long number)
//////////////{
//////////////	int numeroInvertido = 0;
//////////////	while(number > 0)
//////////////	{
//////////////		numeroInvertido = numeroInvertido * 10 + (number%10);
//////////////		number/=10;
//////////////	}
//////////////	return numeroInvertido;
//////////////}
//////////////
//////////////int d[10];
//////////////
//////////////bool isPalindrome(long long n){
//////////////    int sz = 0;
//////////////
//////////////    while(n){
//////////////        d[sz++] = n%10;
//////////////        n /= 10;
//////////////    }
//////////////
//////////////    for(int i = 0;i<sz-1-i;++i)
//////////////        if(d[i]!=d[sz-1-i])
//////////////            return false;
//////////////
//////////////    return true;
//////////////}
//////////////
//////////////int main()
//////////////{
//////////////	int n = 0;
//////////////	long long p = 0;
//////////////	long long soma = 0;
//////////////	long long invertido = 0;
//////////////
//////////////	scanf("%d", &n);
//////////////
//////////////
//////////////	for(int i = 1; i <= n; ++i)
//////////////	{
//////////////		scanf("%lld",&p);
//////////////
//////////////		int cont = 1;
//////////////
//////////////		soma = p + invertNumber(p);
//////////////
//////////////		while(!isPalindrome(soma))
//////////////		{
//////////////			++cont;
//////////////			soma = soma + invertNumber(soma);
//////////////		}
//////////////
//////////////		invertido = soma;
//////////////
//////////////		printf("%d %lld",cont,invertido);
//////////////		printf("\n");
//////////////
//////////////		soma = 0;
//////////////	}
//////////////}
////////////
//////////////#include<stdio.h>
//////////////
//////////////int main()
//////////////{
//////////////	int h1,m1,h2,m2;
//////////////	int minutosDormir = 0;
//////////////
//////////////	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
//////////////
//////////////
//////////////	while(h1 || h2 || m1 || m2)
//////////////	{
//////////////		if( h2 >= h1 && m1<=m2 )
//////////////		{
//////////////		   minutosDormir = ((h2-h1)*60) + (m2-m1);
//////////////		}
//////////////
//////////////	    if(h2 > h1 && m1 > m2)
//////////////		{
//////////////	    	minutosDormir = (60*(h2-h1)) - (m1-m2);
//////////////		}
//////////////
//////////////	    if(h2 < h1 && m1 <= m2)
//////////////	    {
//////////////	    	minutosDormir = ( 60* ( (24-h1)+h2) ) + ( m2-m1 );
//////////////	    }
//////////////
//////////////	    if(h2<=h1 && m1 > m2)
//////////////	    {
//////////////	    	minutosDormir = ( 60* ( (24-h1)+h2) ) - ( m1-m2 );
//////////////	    }
//////////////
//////////////		printf("%d",minutosDormir);
//////////////		printf("\n");
//////////////
//////////////		scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
//////////////	}
//////////////	return 0;
//////////////}
////////////
////////////#include <iostream>
////////////#include <stdio.h>
////////////#include <string>
////////////#include <sstream>
////////////#include <cmath>
////////////#include <math.h>
////////////
////////////#define MAX_LENGHT 500
////////////
////////////int matrix[MAX_LENGHT][MAX_LENGHT];
////////////
////////////class limites
////////////{	public:
////////////
////////////	limites(){
////////////		coluna = 0;
////////////		linha = 0;
////////////	};
////////////	int coluna;
////////////	int linha;
////////////};
////////////
////////////int main()
////////////{
////////////
////////////	int n = 0;
////////////	int m = 0;
////////////	int limiteInferior = 0;
////////////	int limiteSuperior = 0;
////////////	int casosParaTeste = 0;
////////////	int contadorColuna = 0;
////////////	int contadorLinha = 0;
////////////	int contador = 0;
////////////    std::string resultado;
////////////
////////////	scanf("%d %d",&n,&m);
////////////
////////////	while(n != 0 && m!= 0)
////////////	{
////////////		limites primeirasLinhas[m];
////////////		limites ultimasLinhas[m];
////////////
////////////		contadorColuna = 0;
////////////		contadorLinha = 0;
////////////		contador = 0;
////////////
////////////		for(int i =0; i < n; i++)
////////////		{
////////////			for(int j = 0; j < m; j++)
////////////			{
////////////				scanf("%d",&matrix[i][j]);
////////////
////////////			}
////////////		}
////////////
////////////		scanf("%d",&casosParaTeste);
////////////
////////////		for(int casos = 0; casos < casosParaTeste; casos++)
////////////		{
////////////
////////////			scanf("%d %d",&limiteInferior,&limiteSuperior);
////////////
////////////			for(int j = 0; j < m; j++)
////////////			{
////////////				for( int i = 0; i < n; i++)
////////////				{
////////////					int lb = (lower_bound(matrix[i],matrix[i]+n,limiteInferior))-matrix[i];
////////////					if(matrix[i][j] >= limiteInferior)
////////////					{
////////////						primeirasLinhas[contadorLinha] =  *(new limites());
////////////						primeirasLinhas[contadorLinha].linha = i;
////////////						primeirasLinhas[contadorLinha].coluna = j;
////////////						// printf("Iniciais (%d,%d,%d) ",matrix[i][j],primeirasLinhas[contadorLinha].linha,primeirasLinhas[contadorLinha].coluna);
////////////						contadorLinha++;
////////////						break;
////////////					}
////////////				}
////////////
////////////				for( int i = n-1; i >= 0; i--)
////////////				{
////////////					if(matrix[i][j] <= limiteSuperior)
////////////					{
////////////						ultimasLinhas[contadorColuna]  = *(new limites());
////////////						ultimasLinhas[contadorColuna].linha = i;
////////////						ultimasLinhas[contadorColuna].coluna = j;
////////////				//		 printf("Finais (%d,%d,%d) ",matrix[i][j],ultimasLinhas[contadorColuna].linha,ultimasLinhas[contadorColuna].coluna);
////////////						contadorColuna++;
////////////						break;
////////////					}
////////////				}
////////////			}
//////////////////
////////////			for(int i = 0; i < contadorLinha; i++)
////////////			{
////////////				 printf("Iniciais (%d,%d) ",primeirasLinhas[i].linha,primeirasLinhas[i].coluna);
////////////			}
////////////			 printf("\n");
////////////			for(int i = 0; i < contadorColuna; i++){
////////////				 printf("Finais (%d,%d) ",ultimasLinhas[i].linha,ultimasLinhas[i].coluna);
////////////
////////////			}
////////////
////////////			 printf("\n");
////////////            for(int i = 0; i<contadorLinha; i++)
////////////            {
////////////                for(int j = 0; j< contadorColuna; j++)
////////////                {
////////////
////////////                    int linha = (ultimasLinhas[j].linha - primeirasLinhas[i].linha);
////////////                    int coluna = (ultimasLinhas[j].coluna - primeirasLinhas[i].coluna);
////////////
////////////                    if(linha == coluna)
////////////                        if(contador < linha+1){
////////////                            contador = linha+1;
////////////                            break;
////////////                        }
////////////                }
////////////            }
////////////
//////////////            std::stringstream ss;
////////////
////////////  //          ss << contador;
////////////    //        resultado+=ss.str()+"\n";
//////////////
////////////		//	contador =(int) sqrt((pow( ultimasLinhas[contadorColuna-1].linha- primeirasLinhas[contadorLinha-1].linha,2)) + (pow(ultimasLinhas[contadorColuna-1].coluna - primeirasLinhas[contadorLinha-1].coluna ,2)));
////////////
////////////			printf("%d",contador);
////////////			printf("\n");
////////////
////////////			contador = 0;
////////////			contadorColuna = 0;
////////////			contadorLinha = 0;
////////////		}
////////////		printf("-\n");
////////////		scanf("%d %d",&n,&m);
////////////	}
////////////}
//////////
//////////
////////////#include<stdio.h>
////////////#include<iostream>
////////////#include<cmath>
////////////#include<math.h>
////////////
////////////#define MAX_LENGHT 500
////////////using namespace std;
////////////
////////////
////////////int main()
////////////{
////////////	int matrix[MAX_LENGHT][MAX_LENGHT];
////////////
////////////	int totalLinhas   = 0;
////////////	int totalColunas  = 0;
////////////	int consultas     = 0;
////////////	int areaMenor 	  = 0;
////////////	int areaMaior 	  = 0;
////////////	int maiorAreaPossivel = 0;
////////////	int contador = 0;
////////////	int maiorDaLinha = 0;
////////////
////////////	while(true)
////////////	{
////////////		scanf("%d %d",&totalLinhas,&totalColunas);
////////////		int menor = min(totalLinhas,totalColunas);
////////////
////////////		if(totalLinhas == 0 && totalColunas == 0) break;
////////////
////////////		for(int i = 0; i < totalLinhas; i++)
////////////			for(int j = 0; j < totalColunas; j++)
////////////				scanf("%d",&matrix[i][j]);
////////////
////////////		scanf("%d",&consultas);
////////////
////////////		for(int casos = 0; casos < consultas; casos++)
////////////		{
////////////			scanf("%d %d",&areaMenor,&areaMaior);
////////////
////////////			for(int i = 0; i < totalLinhas; i++)
////////////			{
////////////				if(maiorAreaPossivel + i >= totalLinhas + 1) break;
////////////
////////////				maiorDaLinha = (lower_bound(matrix[i],matrix[i]+totalColunas,areaMenor))-matrix[i];
//////////////				for(int busca = 0; busca < totalColunas; busca++)
//////////////				{
//////////////					if(matrix[i][busca] >= areaMenor)
//////////////					{
//////////////						maiorDaLinha = busca;
//////////////						break;
//////////////					}
//////////////				}
////////////
////////////				for(int j = maiorDaLinha; j < totalColunas; j++)
////////////				{
////////////					if(matrix[i][j] >= areaMenor && matrix[i][j] <= areaMaior)
////////////					{
////////////						contador++;
////////////						int proximaLinha = i + 1;
////////////						int proximaColuna = j + 1;
////////////
////////////						//Verifica se pode obter um quadrado de area maior.
////////////						while((proximaLinha < totalLinhas && proximaColuna < totalColunas) && matrix[proximaLinha][proximaColuna] <= areaMaior)
////////////						{
////////////							contador++;
////////////							proximaLinha++;
////////////							proximaColuna++;
////////////						}
////////////						maiorAreaPossivel = max(maiorAreaPossivel,contador);
////////////						contador = 0;
////////////						break;
////////////					}
////////////
////////////					// verifica se pode construir uma matriz com
////////////					if(maiorAreaPossivel + j >= totalColunas + 1) break;
////////////
////////////					//fora do limite.
////////////					if (matrix[i][j] >= areaMaior) break;
////////////
////////////					// caso em que resta apenas uma linha ou coluna menor ou maior que o intervalo.
////////////					if (maiorAreaPossivel == menor)
////////////					{
////////////								i=totalLinhas;
////////////							    j=totalColunas;
////////////					}
////////////				} // for colunas.
////////////
////////////			} // fim do for interando sobre as linhas
////////////
////////////			printf("%d\n",maiorAreaPossivel);
////////////			contador = 0;
////////////			maiorAreaPossivel = 0;
////////////		} // Fim do for casos;
////////////
////////////		maiorAreaPossivel = 0;
////////////		contador = 0;
////////////		printf("-\n");
////////////	} // fim while.
////////////
////////////	return 0;
////////////}
//////////
////////////#include<iostream>
////////////#include<stdio.h>
////////////#include <cmath>
////////////using namespace std;
////////////
////////////int main()
////////////{
////////////	int n,m;
////////////
////////////	while(true)
////////////	{
////////////		scanf("%d %d",&n,&m);
////////////
////////////		if(m == 0 && n == 0) break;
////////////
////////////
////////////		if(m == n &&  n % 2 == 0 && n > 2)
////////////		{
////////////			int resultado = pow(m,2)/2;
////////////			printf("%d knights may be placed on a %d row %d column board.\n",resultado,n,m);
////////////		}
////////////		else
////////////		if((m == n && n == 2) || ((n == 2 || n==1) && m==1)) printf("%d knights may be placed on a %d row %d column board.\n",n*m,n,m);
////////////		else
////////////		if(m == n &&  n % 2 != 0 && n > 1)
////////////		{
////////////				int resultado = (pow(n,2) + 1)/2;
////////////				printf("%d knights may be placed on a %d row %d column board.\n",resultado,n,m);
////////////		}
////////////		else if(n==2 && m==3 )printf("%d knights may be placed on a %d row %d column board.\n",4,n,m);
////////////		else if(n == 2)
////////////		{
////////////			if(m%4 >= 1){
////////////				printf("%d knights may be placed on a %d row %d column board.\n",((m*n+1))/2,n,m);
////////////			}else
////////////			{
////////////				if(m % 4 == 1){
////////////					printf("%d knights may be placed on a %d row %d column board.\n",m+1,n,m);
////////////				}
////////////				else
////////////				{
////////////						int v = 4*(round(max(m,n)/4));
////////////						printf("%d knights may be placed on a %d row %d column board.\n",v,n,m);
////////////				}
////////////			}
////////////		}
////////////		else
////////////		{
////////////
////////////			printf("%d knights may be placed on a %d row %d column board.\n",((m*n+1))/2,n,m);
////////////		}
////////////
////////////	}
////////////	return 0;
////////////}
//////////
//////////
////////////#include<stdio.h>
////////////#include<iostream>
////////////#include<cmath>
////////////
////////////using namespace std;
////////////
////////////int main(){
////////////	int n,m;
////////////
////////////	while(true)
////////////	{
////////////		scanf("%d %d",&n,&m);
////////////		if(n == 0 && m==0) break;
////////////
////////////
////////////		if(m == n &&  n % 2 == 0 && n > 2)
////////////		{
////////////			int resultado = pow(m,2)/2;
////////////			printf("%d knights may be placed on a %d row %d column board.\n",resultado,n,m);
////////////		}
////////////		else if(m == n &&  n % 2 != 0 && n > 1)
////////////		{
////////////			int resultado = (pow(n,2) + 1)/2;
////////////			printf("%d knights may be placed on a %d row %d column board.\n",resultado,n,m);
////////////		}
////////////		else
////////////		if (n == 1){
////////////					printf("%d knights may be placed on a %d row %d column board.\n",m,n,m);
////////////				}else if(m == 1){
////////////					printf("%d knights may be placed on a %d row %d column board.\n",n,n,m);
////////////				}else if(n == 2 && m == 2){
////////////					printf("%d knights may be placed on a %d row %d column board.\n",4,n,m);
////////////				}else if(n == 2){
////////////					if(m % 4 == 1){
////////////						printf("%d knights may be placed on a %d row %d column board.\n",m+1,n,m);
////////////					}else{
////////////						int v = 4*(round(max(m,n)/4));
////////////						printf("%d knights may be placed on a %d row %d column board.\n",v,n,m);
////////////					}
////////////				}else if(m == 2){
////////////					if(n % 4 == 1){
////////////						printf("%d knights may be placed on a %d row %d column board.\n",n+1,n,m);
////////////					}else{
////////////						int v = 4*(round(max(m,n)/4));
////////////						printf("%d knights may be placed on a %d row %d column board.\n",v,n,m);
////////////					}
////////////				}else{
////////////					int v = round(max(m,n)/2) * round(min(m,n)/2) + (int)(max(m,n)/2) * (int)(min(m,n)/2);
////////////					printf("%d knights may be placed on a %d row %d column board.\n",v,n,m);
////////////				}
////////////			}
////////////	return 0;
////////////}
//////////
////////////#include<stdio.h>
//////////
////////////long long result(int c,int d)
////////////{
////////////	if(!c&&!d) return (long long) 0;
////////////	long long result = 1;
////////////
////////////	for(int j = 0; j < c; j++)
////////////		result*=26;
////////////
////////////	for(int j = 0; j < d; j++)
////////////		result*=10;
////////////
////////////	return result;
////////////}
////////////
////////////int main()
////////////{
////////////	int c = 0;
////////////	int	d = 0;
////////////	int	t = 0;
////////////
////////////	scanf("%d",&t);
////////////
////////////	for(int i = 0; i < t; i++)
////////////	{
////////////		scanf("%d %d",&c,&d);
////////////		printf("%lld\n",result(c,d));
////////////	}
////////////
////////////	return 0;
////////////}
//////////
//////////
////////////#include <iostream>
////////////#include <stdlib.h>
////////////
////////////using namespace std;
////////////
////////////int main()
////////////{
////////////	char *cpf = new char[14];
////////////	long soma = 0;
////////////	int b1 = -1;
////////////	int b2 = -2;
////////////
////////////	while(cin >> cpf)
////////////	{
////////////		int cont  = 1;
////////////
////////////		for(int i = 1; i <= 11; i++)
////////////		{
////////////			if(cpf[i-1] == '.') continue;
////////////			char number[1];
////////////			number[0] = (cpf[i-1]);
////////////			soma+=atoi(number) * cont++;
////////////		}
////////////
////////////		cont = 9;
////////////
////////////		int resto = soma % 11;
////////////		b1 = (resto == 10) ? 0 : resto;
////////////		soma = 0;
////////////
////////////		for(int i = 1; i <= 11; i++)
////////////		{
////////////			if(cpf[i-1] == '.') continue;
////////////			char number[1];
////////////			number[0] = (cpf[i-1]);
////////////			soma+=atoi(number) * cont--;
////////////		}
////////////
////////////		resto = soma % 11;
////////////		b2 = (resto == 10) ? 0 : resto;
////////////		cont = 1;
////////////		soma = 0;
////////////
////////////		char *d1 = new char[1];
////////////		char *d2 = new char[2];
////////////
////////////		d1[0] = cpf[12];
////////////
////////////		d2[0] = cpf[13];
////////////
////////////
////////////		if(atoi(d1) == b1 && atoi(d2) == b2)
////////////		{
////////////			cout << "CPF valido"<<endl;
////////////
////////////		}else{
////////////			cout << "CPF invalido"<<endl;
////////////		}
////////////
////////////		delete[] d1;
////////////		delete[] d2;
////////////	}
////////////
////////////	delete[] cpf;
////////////
////////////	return 0;
////////////}
//////////
//////////
////////////Uva problem-1985
////////////#include <stdio.h>
////////////
////////////int main()
////////////{
////////////	int n = 0;
////////////	int m = 0;
////////////	int casos;
////////////
////////////
////////////	scanf("%d",&casos);
////////////	for(int i = 0; i < casos; i++)
////////////	{
////////////		scanf("%d %d",&n,&m);
////////////		printf("%d",((n/3)*(m/3)));
////////////		printf("\n");
////////////	}
////////////	return 0;
////////////}
//////////
//////////////problem URI 1836
////////////#include <iostream>
////////////#include<stdio.h>
////////////#include <string>
////////////#include <math.h>
////////////
////////////
////////////int main()
////////////{
////////////	int casosDeTeste = 0;
////////////	std::string nomePokemon;
////////////	short nivel = 0;
////////////	int valorBaseAtributoBS = 0;
////////////	int valorDosEsforcosEV = 0;
////////////	int valorIndividualIV = 0;
////////////
////////////	scanf("%d",&casosDeTeste);
////////////
////////////	for(int caso = 0; caso < casosDeTeste; caso++)
////////////	{
////////////		std::cin >> nomePokemon >> nivel;
////////////		//scanf("%s %d",&nomePokemon,nivel);
////////////
////////////
////////////		//hp
////////////		scanf("%d %d %d",&valorBaseAtributoBS,&valorIndividualIV,&valorDosEsforcosEV);
////////////
////////////		int hp = ((valorIndividualIV+valorBaseAtributoBS+(sqrt(valorDosEsforcosEV)/8)+50)*nivel)/50 + 10;
////////////
////////////		//ataque
////////////		scanf("%d %d %d",&valorBaseAtributoBS,&valorIndividualIV,&valorDosEsforcosEV);
////////////
////////////		int ataque = ((valorIndividualIV + valorBaseAtributoBS + (sqrt(valorDosEsforcosEV)/8))*nivel)/50 + 5;
////////////
////////////		//defesa
////////////		scanf("%d %d %d",&valorBaseAtributoBS,&valorIndividualIV,&valorDosEsforcosEV);
////////////
////////////		int defesa = ((valorIndividualIV + valorBaseAtributoBS + (sqrt(valorDosEsforcosEV)/8))*nivel)/50 + 5;
////////////
////////////		//velocidade
////////////		scanf("%d %d %d",&valorBaseAtributoBS,&valorIndividualIV,&valorDosEsforcosEV);
////////////
////////////		int velocidade = ((valorIndividualIV + valorBaseAtributoBS + (sqrt(valorDosEsforcosEV)/8))*nivel)/50 + 5;
////////////
////////////		printf("Caso #%d: %s nivel %d\n",caso+1,nomePokemon.c_str(),nivel);
////////////		printf("HP: %d\n",hp);
////////////		printf("AT: %d\n",ataque);
////////////		printf("DF: %d\n",defesa);
////////////		printf("SP: %d\n",velocidade);
////////////	}
////////////
////////////	return 0;
////////////}
//////////
////////////problem UVA 12289
////////////#include <iostream>
////////////#include <stdio.h>
////////////#include <string>
////////////
////////////int main()
////////////{
////////////	int n;
////////////	std::string word;
////////////
////////////	std::cin >> n;
////////////	for(int i = 0; i < n; i++)
////////////	{
////////////		std::cin >> word;
////////////
////////////		switch(word.size())
////////////		{
////////////			case 3:
////////////			{
////////////				if((word.at(0) == 'o' && word.at(2) == 'e') || (word.at(1) == 'n' && word.at(2) == 'e') || (word.at(0) == 'o' && word.at(1) == 'n'))
////////////				{
////////////					printf("%d\n",1);
////////////
////////////				}
////////////				else if((word.at(0) == 't' && word.at(2)=='o') || (word.at(0) == 't' && word.at(1) == 'w') ||(word.at(1) == 'w' && word.at(2) == 'o'))
////////////				{
////////////					printf("%d\n",2);
////////////				}
////////////					break;
////////////			}
////////////
////////////			case 5:
////////////			{
////////////				printf("%d\n",3);
////////////				break;
////////////			}
////////////		}
////////////	}
////////////	return 0;
////////////}
//////////
////////////URI problem 1548
//////////
////////////#include <algorithm>
////////////#include <vector>
////////////#include <stdio.h>
////////////
////////////bool ordena(int i, int j)
////////////{
////////////	return i > j;
////////////}
////////////
////////////int main()
////////////{
////////////	int n = 0;
////////////	int nota = 0;
////////////	int totalReordenacao = 0;
////////////	int alunos = 0;
////////////
////////////	scanf("%d",&n);
////////////
////////////	for(int i = 0; i < n; i++)
////////////	{
////////////		std::vector<int> filaAlunos;
////////////		std::vector<int> filaAlunosAux;
////////////
////////////		scanf("%d",&alunos);
////////////		for(int j = 0; j < alunos; j++)
////////////		{
////////////			scanf("%d",&nota);
////////////			filaAlunos.push_back(nota);
////////////			filaAlunosAux.push_back(nota);
////////////		}
////////////
////////////		std::sort(filaAlunos.begin(),filaAlunos.end(),ordena);
////////////
////////////		for(int k = 0; k < alunos; k++)
////////////		{
////////////			if(filaAlunosAux[k] == filaAlunos[k]) totalReordenacao++;
////////////		}
////////////
////////////		printf("%d\n",(totalReordenacao));
////////////		totalReordenacao = 0;
////////////	}
////////////	return 0;
////////////}
//////////
////////////
////////////#include <cstdio>
////////////
////////////using namespace std;
////////////
////////////bool change(char cur, char c1, char c2){
////////////    if(cur == 'x' && c1 == '-') return true;
////////////    if(cur == 'y' && c2 == 'y' && c1 == '+') return true;
////////////    if(cur == 'z' && c2 == 'z' && c1 == '+') return true;
////////////    return false;
////////////}
////////////
////////////int main(){
////////////    int L;
////////////    char s[3];
////////////
////////////    while(true)
////////////    {
////////////        scanf("%d",&L);
////////////        if(L == 0) break;
////////////        --L;
////////////
////////////        int sign = 1;
////////////        char c = 'x';
////////////
////////////        for(int i = 0;i < L;++i)
////////////        {
////////////            scanf("%s",s);
////////////            if(s[0] == 'N') continue;
////////////
////////////            if(change(c,s[0],s[1])) sign = -sign;
////////////
////////////            if(c == 'x') c = s[1];
////////////            else if(c == 'y' && s[1] == 'y') c = 'x';
////////////            else if(c == 'z' && s[1] == 'z') c = 'x';
////////////        }
////////////
////////////        printf("%c%c\n",sign == 1? '+' : '-',c);
////////////    }
////////////
////////////    return 0;
////////////}
//////////
////////////#include <stdio.h>
////////////#include <string>
////////////#include <iostream>
////////////
////////////bool change(char cur, char c1, char c2){
////////////    if(cur == 'x' && c1 == '-') return true;
////////////    if(cur == 'y' && c2 == 'y' && c1 == '+') return true;
////////////    if(cur == 'z' && c2 == 'z' && c1 == '+') return true;
////////////    return false;
////////////}
////////////
////////////int main()
////////////{
////////////	std::string input;
////////////	int comprimentoL;
////////////
////////////
////////////	scanf("%d",&comprimentoL);
////////////
////////////	while(comprimentoL > 0)
////////////	{
////////////		bool muda = true;
////////////		char eixoInicio = 'x';
////////////
////////////		for(int i = 0; i < comprimentoL-1; ++i)
////////////		{
////////////			std::cin >> input;
////////////
////////////			if(input.at(0) == 'N') continue;
////////////
////////////
////////////			if(change(eixoInicio,input.at(0),input.at(1))) muda = !muda;
////////////
////////////			if(eixoInicio == 'x') eixoInicio = input.at(1);
////////////			else if(eixoInicio == 'y' && input.at(1) == 'y') eixoInicio = 'x';
////////////			else if(eixoInicio == 'z' && input.at(1) == 'z') eixoInicio = 'x';
////////////		}
////////////
////////////		char saida = muda == true ? '+' : '-';
////////////		printf("%c%c\n",saida,eixoInicio);
////////////		eixoInicio = 'x';
////////////
////////////		scanf("%d",&comprimentoL);
////////////
////////////	}
////////////	return 0;
////////////}
//////////
//////////
//////////
//////////////URI problema 1374
//////////////Autor Isaías Santana.
////////////
////////////#include <stdio.h>
////////////class Anotacoes
////////////{
////////////public:
////////////	Anotacoes(){
////////////		        this->dia = 0;
////////////				this->mes = 0;
////////////				this->ano = 0;
////////////				this->consumo = 0;
////////////	};
////////////	Anotacoes(int dia, int mes, int ano, int consumo){
////////////		this->dia = dia;
////////////		this->mes = mes;
////////////		this->ano = ano;
////////////		this->consumo = consumo;
////////////	};
////////////	int dia;
////////////	int mes;
////////////	int ano;
////////////	int consumo;
////////////};
////////////
////////////int main()
////////////{
////////////
////////////	int totalTestes = 0;
////////////	int	dia = 0;
////////////	int mes = 0;
////////////	int ano = 0;
////////////	int consumo = 0;
////////////	int consumoEntreDias = 0;
////////////	int contador = 0;
////////////
////////////
////////////	const bool mesTrintaEUm[13] = {
////////////			false,
////////////			true, //janeiro
////////////			false, //fevereivo
////////////			true, //março
////////////			false,//abril
////////////			true,//maio
////////////			false,//junho
////////////			true,//julho
////////////			true,//agosto
////////////			false,//setembro
////////////			true,//outubro
////////////			false,//novembro
////////////			true//dezembro
////////////	};
////////////
////////////	while(true)
////////////	{
////////////		scanf("%d",&totalTestes);
////////////		if(totalTestes == 0) break;
////////////
////////////		Anotacoes anot[totalTestes];
////////////
////////////		for(int i  = 0; i < totalTestes; i++)
////////////		{
////////////			scanf("%d %d %d %d",&dia,&mes,&ano,&consumo);
////////////			Anotacoes anotacoes(dia,mes,ano,consumo);
////////////			anot[i] = anotacoes;
////////////		}
////////////
////////////		for(int i = 1; i < totalTestes; i++)
////////////		{
////////////
////////////			int difDia = anot[i].dia - anot[i-1].dia;
////////////			int difAno = anot[i].ano - anot[i-1].ano;
////////////			int difMes = anot[i].mes - anot[i-1].mes;
////////////
////////////			//intervalos no mesmo mes
////////////			if(difDia == 1 && (difMes == 0 && difAno == 0))
////////////			{
////////////				int difConsumo = anot[i].consumo - anot[i-1].consumo;
////////////				consumoEntreDias+=difConsumo;
////////////				contador++;
////////////				continue;
////////////			}
////////////
////////////			//Ano bissexto
////////////			if((anot[i-1].ano % 4 == 0 || anot[i-1].ano % 400 == 0) && anot[i-1].mes == 2)
////////////			{
////////////				 if((anot[i-1].dia == 29 && anot[i].dia == 1 && anot[i].mes == 3 && difAno == 0))
////////////				 {
////////////
////////////					int difConsumo = anot[i].consumo - anot[i-1].consumo;
////////////					consumoEntreDias+=difConsumo;
////////////
////////////					contador++;
////////////					continue;
////////////				 }
////////////			}
////////////			else
////////////			if((anot[i-1].dia == 28 && anot[i].dia == 1 && anot[i].mes == 3 && difAno == 0) && anot[i-1].mes == 2)
////////////			{
////////////				int difConsumo = anot[i].consumo - anot[i-1].consumo;
////////////				consumoEntreDias+=difConsumo;
////////////				contador++;
////////////				continue;
////////////			}
////////////
////////////
////////////			if(mesTrintaEUm[anot[i-1].mes]) //meses com 31 dias
////////////			{
////////////				//final de um mês e inicio do proximo
////////////				if((anot[i-1].dia == 31 && anot[i].dia == 1) && (difMes == 1 && difAno == 0))
////////////				{
////////////
////////////					int difConsumo = anot[i].consumo - anot[i-1].consumo;
////////////					consumoEntreDias+=difConsumo;
////////////					contador++;
////////////					continue;
////////////				}
////////////
////////////				//31 dezembro para 1 de janeiro;
////////////				if(difDia == -30 && ((difMes == -11 && difAno == 1)))
////////////				{
////////////
////////////					int difConsumo = anot[i].consumo - anot[i-1].consumo;
////////////					consumoEntreDias+=difConsumo;
////////////					contador++;
////////////					continue;
////////////				}
////////////			}
////////////			else //meses com 30 dias.
////////////			{
////////////				//final de um mês e inicio do proximo
////////////				if((anot[i-1].dia == 30 && anot[i].dia == 1) && (difMes == 1 && difAno == 0))
////////////				{
////////////
////////////					int difConsumo = anot[i].consumo - anot[i-1].consumo;
////////////					consumoEntreDias+=difConsumo;
////////////					contador++;
////////////					continue;
////////////				}
////////////			}
////////////
////////////		}
////////////
////////////		printf("%d %d\n",contador,consumoEntreDias);
////////////		consumoEntreDias = 0;
////////////		contador = 0;
////////////	}
////////////
////////////	return 0;
////////////}
//////////
//////////
////////////Problema URI 1138
//////////#include <stdio.h>
//////////
//////////long  digitos[10] = {0,0,0,0,0,0,0,0,0,0};
//////////
//////////void zeraDigitos()
//////////{
//////////	for(int i=0; i < 10; i++) digitos[i] = 0;
//////////}
//////////
//////////void contaDigitos(long numero)
//////////{
//////////	while(numero > 0)
//////////	{
//////////		long  unidade = numero % 10;
//////////		numero/=10;
//////////		digitos[unidade]++;
//////////	}
//////////}
//////////
//////////int digitCounts(int k, int n)
//////////{
//////////       int digit = 1;
//////////       int cnt = 0;
//////////       while(digit <= n) {
//////////           int low = n % digit; // lower digits;
//////////           int high = n / (digit*10); // higher digits;
//////////           int cur = n / digit % 10;
////////////           printf("%d\n",cur);
//////////           digitos[cur]++;
//////////           if(cur == k) {
//////////               // higher digits * digit + lower digits + 1;
//////////               cnt += ((high * digit) + low + 1);
//////////           }else if(cur < k) {
//////////               // higher digits * digit
//////////               cnt += (high * digit);
//////////           }else{
//////////               // (higher digits + 1: itself) * digit
//////////               cnt += ((high + (k == 0?0:1)) * digit);
//////////           }
//////////           digit *= 10;
//////////       }
//////////       return cnt + (k == 0 ? 1 : 0);
//////////  }
//////////
//////////int main()
//////////{
//////////
//////////
//////////	int  a = 0;
//////////	int  b = 0;
//////////	int potencia = 0;
//////////	int noves = 0;
//////////	int prefixo;
//////////
//////////	while(true)
//////////	{
//////////		scanf("%d %d",&a,&b);
//////////
//////////		if(a == 0 && b == 0) break;
//////////
//////////		//contaDigitos(a);
//////////		//contaDigitos(b);
////////////
//////////	//	printf("%d\n",digitCounts(a,b));
//////////		int aux = b;
//////////		printf("\n");
//////////		for(int cont = a  ; cont <= b; cont++)
//////////		{
//////////			//contaDigitos(cont);
//////////			digitCounts(cont,aux);
//////////		}
////////////		printf("\n");
//////////		for(int i = 0; i < 10; i++)
//////////		{
//////////			printf("%ld ",digitos[i]);
//////////		}
//////////
//////////
//////////		printf("\n");
//////////		zeraDigitos();
//////////	}
//////////	return 0;
//////////}
//////////
//////////
//// //problema fatorial SPOJ
////
////#include <stdio.h>
////
//////casos bases, disponível em http://quantomania.blogspot.com.br/2011/08/last-non-zero-digit-of-factorial.html
////int osDez[11] = {1,1,2,6,4,2,2,4,2,8,8};
////
////// formula encontrada em http://quantomania.blogspot.com.br/2011/08/last-non-zero-digit-of-factorial.html
////long long ultimoDigitoNaoZero(int n)
////{
////	if(n<=10) return osDez[n];
////	if(((n/10) % 2) == 0 )
////	{
////		return 6 * ultimoDigitoNaoZero(n/5) *ultimoDigitoNaoZero(n%10);
////	}
////	else
////	{
////		return 4 * ultimoDigitoNaoZero(n/5) *ultimoDigitoNaoZero(n%10);
////	}
////}
////
////
////int main()
////{
////	int n = 0;
////	int instancia = 1;
////
////	while(scanf("%d",&n) != EOF)
////	{
////		printf("Instancia %d\n",instancia++);
////		printf("%lld\n",ultimoDigitoNaoZero(n)%10);
////	}
////	return 0;
////}
//////
////////
////////
////////#include <iostream>
////////#include <iomanip>
////////#include <cmath>
////////
////////using namespace std;
////////
////////void count (int a, int b) {
////////  int D[10];
////////  int P = floor(log10(b-a));
////////  bool reached_ceil = false;
////////
////////  for (int i = 0; i < 10; i++)
////////    D[i] = 0;
////////
////////  for (int n = a; n <= b; n++) {
////////    bool leave = false;
////////    int B = pow(10,P);
////////    for (int p = P; p > 0; p--, B/=10) {
////////      if (n >= B && b - n >= B && n%B == 0) {
////////        if (p == P)
////////          reached_ceil = true;
////////        else if (reached_ceil)
////////          P = p;
////////        for (int i = 0; i < 10; i++)
////////          D[i] += p*B/10;
////////        int k = n/B;
////////        while (k > 0) {
////////          D[k%10] += B;
////////          k /= 10;
////////        }
////////        n += B-1;
////////        leave = true;
////////        break;
////////      }
////////    }
////////    if (leave)
////////      continue;
////////    int k = n;
////////    while (k > 0) {
////////      D[k%10]++;
////////      k /= 10;
////////    }
////////  }
////////
////////  for (int i = 0; i < 9; i++)
////////    cout << D[i] << ' ';
////////  cout << D[9] << endl;
////////}
////////
////////int main () {
////////  int a, b;
////////  cin >> a >> b;
////////  while (a != 0 || b != 0) {
////////    count(a,b);
////////    cin >> a >> b;
////////  }
////////
////////  return 0;
////////}
//////
//////
//////void contaDigitos1(long numero, long long digitos[])
//////{
//////
//////	while(numero > 0)
//////	{
//////		long  unidade = numero % 10;
//////		numero/=10;
//////		digitos[unidade]+=1;
//////	}
//////}
//////
////////URI problema 1138
//////#include <stdio.h>
//////#include <math.h>
//////
//////void contaDigitos(int n, long long digitos[])
//////{
//////
//////    for (int i = 0; i <= 9; i++) digitos[i] = 0;
//////
//////
//////    while (n > 9)
//////    {
//////
//////        int totalDeDigitos = log10(1.0 * n) + 1; // 2
//////        int prefixosNumero = n / pow(10.0, 1.0 * (totalDeDigitos - 1)); // 1
//////        int numeroMaximoDigitosPorNumero = prefixosNumero * (int)pow(10.0, 1.0 * (totalDeDigitos - 1)) * (totalDeDigitos - 1); // 1 * 10 * 1
//////
//////        //número maximo de digitos por digito.
//////        for (int i = 0; i <= 9; i++)
//////        {
//////            digitos[i] += numeroMaximoDigitosPorNumero / 10;
//////        }
//////
//////        // xy -> xy, 1 ate x tem 10^totalDigitos-1 digitos x repetidos
//////        for (int i = 1; i < prefixosNumero; i++)
//////        {
//////            digitos[i] += (long long)pow(10.0, 1.0 * (totalDeDigitos - 1));
//////        }
//////
//////        digitos[prefixosNumero] += n % (long long)pow(10.0, 1.0 * (totalDeDigitos - 1)) + 1;
//////
//////        n %= (long long)pow(10.0, 1.0 * (totalDeDigitos - 1));
//////
//////
//////
//////    }
//////
//////	 for (int i = 0; i <=n; i++) digitos[i] += 1;
////////	  contaDigitos1((long)n,digitos);
//////
//////}
//////
//////int main()
//////{
//////
//////    while (true)
//////    {
//////        int a, b;
//////        scanf("%d %d", &a, &b);
//////        if (a == 0 && b == 0) break;
//////        long long contaA[15], contaB[15],contaC[15],contaD[15];
//////        contaDigitos(0, contaA);
//////        contaDigitos(a, contaB);
//////
//////        contaDigitos(0, contaC);
//////        contaDigitos(b, contaD);
//////
//////
//////
//////        for (int i = 0; i <= 9; i++)
//////        {
//////            int difA = (contaD[i] - contaC[i]) + 1;
//////            int difB = (contaB[i] - contaA[i]) + 1;
//////
//////            int resp = difA - difB;
//////
//////            if (i) printf(" ");
//////
//////        	   printf("%d",resp);
//////        }
//////        printf("\n");
//////
//////    }
//////    return 0;
//////}
//////
//////
////////#include<stdio.h>
////////#include<math.h>
////////#include <cmath>
////////
////////int digitos[] = {0,0,0,0,0,0,0,0,0,0};
////////void zeraDigitos()
////////{
////////	for(int i=0; i < 10; i++) digitos[i] = 0;
////////}
////////
////////void contaDigitos(long numero, int count)
////////{
//////
////////	while(numero > 0)
////////	{
////////		long  unidade = numero % 10;
////////		numero/=10;
////////		digitos[unidade]+=count;
////////	}
////////}
////////
////////
////////
////////int main(){
////////
//////////	int n = 0;
//////////	int resp = 0;
//////////	scanf("%d",&n);
//////////
//////////
//////////	resp = 0;
//////////	int cont = 0;
//////////	for(int j = 1; j <= n; j++)
//////////	{
//////////		for(int i = 2; i <= ((int) sqrt(j)); i++)
//////////		{
//////////			if(j % i == 0) resp+=1;
//////////		}
//////////		cont+=resp;
//////////		resp = 0;
//////////	}
//////////	printf("%d\n",cont+n);
//////////
////////}
////////	int primeiro,ultimo,numero,potencia,noves,prefixo;
////////
////////
////////	scanf("%d %d",&primeiro,&ultimo);
////////
////////	for(numero = primeiro; numero <= ultimo;numero++)
////////	{
////////		contaDigitos(numero,1);
////////
////////		potencia = floor(log10(numero));
////////
////////		if(potencia > 0)
////////		{
////////			noves = pow(10,potencia)-1;
////////			if(numero + noves <= ultimo)
////////			{
////////				for(int i = 0; i < 10; i++)
////////					digitos[i] = 10 * pow(10,potencia-1);
////////
////////				digitos[0] -= -potencia;
////////
////////				prefixo = numero / pow(10,potencia-1);
////////				contaDigitos(prefixo,noves);
//////				numero+=noves;
////////				continue;
////////			}
////////		}
////////
////////
////////	}
////////
////////	for(int i = 0; i < 10; i++)
////////	{
////////		printf("%d ",digitos[i]);
////////	}
////////
////////	return 0;
////////}
//
//////Questão 1 tetp
////
////#include<stdio.h>
////
////int main(){
////    int totalNotas = 0;
////    int total = 0;
////
////    double valorMonetario;
////    int notas[12] =
////    {
////    	10000,5000,2000,1000,500,200,100,50,25,10,5,1
////    };
////
////
////    scanf("%lf",&valorMonetario);
////
////    total=(valorMonetario*100.0)+0.5;
////
////    printf("NOTAS:\n");
////    for(int i = 0; i < 6; i++)
////    {
////    	totalNotas = total/notas[i];
////    	total %=notas[i];
////    	printf("%d nota(s) de R$ %.2lf\n",totalNotas,notas[i]/100.0);
////    }
////
////    printf("MOEDAS:\n");
////    for(int i = 6; i < 12; i++)
////        {
////        	totalNotas = total/notas[i];
////        	total %=notas[i];
////        	printf("%d moeda(s) de R$ %.2lf\n",totalNotas,notas[i]/100.0);
////        }
////
////    return 0;
////}
//
////
//////Questão 2 tetp
////#include<algorithm>
////#include <vector>
////#include <stdio.h>
////using namespace std;
////
////bool ordenaPares(int a, int b)
////{
////	return a < b;
////}
////
////bool ordenaImpares(int a, int b)
////{
////	return a > b;
////}
////
////int main()
////{
////	int n = 0;
////	vector<int> pares;
////	vector<int> impares;
////
////	scanf("%d",&n);
////
////	while(n > 0)
////	{
////		int numero;
////
////		scanf("%d",&numero);
////
////		if(numero % 2 == 0)
////			pares.push_back(numero);
////		else
////			impares.push_back(numero);
////
////		n--;
////	}
////
////	sort(pares.begin(),pares.end(),ordenaPares);
////	sort(impares.begin(),impares.end(),ordenaImpares);
////
////	for(unsigned i  = 0; i < pares.size(); i++)
////	{
////		printf("%d\n",pares[i]);
////	}
////
////	for(unsigned i  = 0; i < impares.size(); i++)
////		{
////			printf("%d\n",impares[i]);
////		}
////
////	return 0;
////}
////
//
//
//
////questão 6 tetp
////#include <stdio.h>
////
////int main(){
////
////    int n = 0;
////    int deslocamento = 0;
////    char cifra[50];
////
////    scanf("%d",&n);
////
////    for(int i = 0; i < n; i++)
////    {
////            scanf("%s",&cifra);
////            scanf("%d",&deslocamento);
////
////            for(int j = 0; j < 50; j++)
////            {
////                    if(cifra[j] == '\0') break;
////
////                    if((cifra[j] - deslocamento) < 65) //estava  no fim do alfabeto.
////                    	printf("%c", (cifra[j] - deslocamento) + 26);
////                    else printf("%c", (cifra[j] - deslocamento));
////            }
////            printf("\n");
////    }
////
////    return 0;
////}
//
//
//
//
//////Questão 3 tetp
////
////#include <stdlib.h>
////#include <stdio.h>
////
////int main()
////{
////    int linha,coluna,linha2,coluna2;
////    while(true)
////    {
////    	scanf("%d %d %d %d", &linha, &coluna, &linha2, &coluna2);
////        if(linha == 0 && coluna == 0 && linha2 == 0 && coluna2 == 0) break;
////    	if (linha == linha2 && coluna == coluna2)
////            printf("0\n");
////
////        else if ((linha == linha2 || coluna == coluna2) || (abs(linha - linha2) == abs(coluna - coluna2))) //(Mesma linha ou mesma coluna) ou Mesma diagonal
////            printf("1\n");
////
////        else
////            printf("2\n");
////    }
////    return 0;
////}
//
//
////#include <stdio.h>
////
////int n, m, i, j, tmp;
////int matriz[100][100];
////
////bool carac1(int matriz[100][100])
////{
////   bool b = true;
////   int l;
////
////   for (i = 0; i < n; ++i)
////   {
////      l = 0;
////
////      for (j = 0; j < m; ++j)
////         l += matriz[i][j];
////
////      if(l == m)
////         b = false;
////   }
////
////   return b;
////}
////
////bool carac2(int matriz[100][100])
////{
////   int tmp = 0;
////   bool  b1;
////
////   for (i = 0; i < m; ++i)
////   {
////      b1 = false;
////
////      for (j = 0; j < n; ++j)
////         if(matriz[j][i] != 0)
////            b1 = true;
////
////      if(b1) tmp++;
////   }
////
////   if(tmp == m) return true;
////   else return false;
////}
////
////bool carac3(int matriz[100][100])
////{
////   bool b = true;
////   int tmp;
////
////   for (i = 0; i < m; ++i)
////   {
////      tmp = 0;
////
////      for (j = 0; j < n; ++j)
////         tmp += matriz[j][i];
////
////      if(tmp == n)
////         b = false;
////   }
////
////   return b;
////}
////
////bool carac4(int matriz[100][100])
////{
////   int tmp = 0, tmp2 = 0;
////
////   for (i = 0; i < n; ++i)
////   {
////      tmp = 0;
////
////      for (j = 0; j < m; ++j)
////         tmp += matriz[i][j];
////
////      if(tmp > 0)
////         tmp2++;
////   }
////
////   if(tmp2 == n) return true;
////   else return false;
////}
////
////int main(int argc, char const *argv[])
////{
////   int c;
////
////   while(true)
////   {
////	   scanf("%d %d", &n, &m);
////
////	  if(n == 0 && m == 0) break;
////      c = 0;
////
////      for (i = 0; i < n; ++i)
////         for (j = 0; j < m; ++j)
////            scanf("%d", &matriz[i][j]);
////
////      if(carac1(matriz)) c++;
////      if(carac2(matriz)) c++;
////      if(carac3(matriz)) c++;
////      if(carac4(matriz)) c++;
////
////      printf("%d\n", c);
////   }
////
////   return 0;
////}
//
//
////Questão 1 prova tetp
//#include <stdio.h>
//#include <stdlib.h>
////#include <mah.h>
//int main()
//{
//	double valorMonetario = 0.0;
//
//	const double vetorMoedas[] = {1.00,0.50,0.25,0.10,0.05,0.01};
//	const int vetorNotas[] = {100,50,20,10,5,2};
//
//	int vetorTotalNotasEMoedas[12];
//
//	scanf("%lf",&valorMonetario);
//
//	printf("NOTAS:\n");
//	//para as notas de 100 até as notas de 2
//	for(int i = 0; i < 6; i++)
//	{
//		//inicializa a posição
//		vetorTotalNotasEMoedas[i] = 0;
//		while(valorMonetario >= vetorNotas[i])
//		{
//			valorMonetario-=vetorNotas[i];
//			++vetorTotalNotasEMoedas[i];
//		}
//
//		printf("%d nota(s) de R$ %d.00\n",vetorTotalNotasEMoedas[i],vetorNotas[i]);
//	}
//
//	printf("MOEDAS:\n");
//	int restanteMoedas = ((int) round(valorMonetario * 100));
//	//para as moedas de 1 até as moedas de 0.01
//	for(int i = 6,cont = 0; i < 12; i++,cont++)
//	{
//		//inicializa a posição
//		vetorTotalNotasEMoedas[i]  = 0;
//
//		int moeda = (int) ( vetorMoedas[cont]*100);
//
//		while(restanteMoedas >= moeda)
//		{
//			restanteMoedas-= moeda;
//			++vetorTotalNotasEMoedas[i];
//		}
//		printf("%d moeda(s) de R$ %.2lf\n",vetorTotalNotasEMoedas[i],vetorMoedas[cont]);
//	}
//
//	return 0;
//}
