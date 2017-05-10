///*
// * URI_1179.cpp
// *
// *  Created on: 10/02/2017
// *      Author: isaias
// */
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//void imprime(vector<int> vetor,int label)
//{
//	string resposta = "";
//
//	switch(label)
//	{
//		case 1:
//			resposta = "par";
//			break;
//		case 2:
//			resposta = "impar";
//	}
//
//	for(unsigned i = 0; i < vetor.size(); i++)
//	{
//		printf("%s[%d] = %d\n",resposta.c_str(),i,vetor[i]);
//	}
//}
//
//int main()
//{
//	int ultimoIndicePreenchidoPar = 0;
//	int ultimoIndicePreenchidoImpar = 0;
//
//	vector<int> vetorPares(5);
//	vector<int> vetorImpares(5);
//
//	for(int i = 1; i <= 15; i++)
//	{
//		int entrada;
//		scanf("%d",&entrada);
//
//		if(entrada % 2 == 0)
//		{
//			if(ultimoIndicePreenchidoPar == (int) vetorPares.size())
//			{
//				imprime(vetorPares,1);
//				ultimoIndicePreenchidoPar = 0;
//			}
//
//			vetorPares[ultimoIndicePreenchidoPar++] = entrada;
//		}
//		else
//		{
//			if(ultimoIndicePreenchidoImpar == (int) vetorImpares.size())
//			{
//				imprime(vetorImpares,2);
//				ultimoIndicePreenchidoImpar = 0;
//			}
//
//			vetorImpares[ultimoIndicePreenchidoImpar++] = entrada;
//		}
//
//	}
//
//	for(int i = 0; i < ultimoIndicePreenchidoImpar; i++)
//	{
//		printf("impar[%d] = %d\n",i,vetorImpares[i]);
//	}
//
//	for(int i = 0; i < ultimoIndicePreenchidoPar; i++)
//	{
//		printf("par[%d] = %d\n",i,vetorPares[i]);
//	}
//
//}
//
//
//
