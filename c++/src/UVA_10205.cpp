///*
// * UVA_10205.cpp
// *
// *  Created on: 07/03/2017
// *      Author: isaias
// */
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//struct Carta
//{
//	string naipe;
//	string valor;
//};
//
//const string naipe[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
//const string valor[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
//
//int main ()
//{
//	int totalCasos = 0;
//	int n = 0;
//	int shuffle = 0;
//
//
//
//	scanf("%d",&totalCasos);
//	printf("\n");
//
//	while(totalCasos)
//	{
//		scanf("%d",&n);
//
//		int shuffles[n][52];
//
//		Carta cartas[52];
//
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = 0; j < 52; j++)
//			{
//				scanf("%d",&shuffles[i][j]);
//				shuffles[i][j]--;
//			}
//		}
//
//		for (int j = 0; j < 4; j++)
//		{
//		      for (int i = 0; i < 13; i++)
//		      {
//		    	  Carta carta;
//		    	  carta.valor = valor[i];
//		    	  carta.naipe = naipe[j];
//
//		        cartas[i + 13 * j] =  carta;
//		      }
//		 }
//
//
//		string k;
//
//		getline(cin,k);
//
//	    while(k != "")
//	    {
//
//	    	if(k.empty()) break;
//
//	    	shuffle = atoi(k.c_str());
//
//	    	Carta temp[52];
//
//	    	for(int i = 0; i < 52; i++)
//	    	{
//	    		temp[i] = cartas[shuffles[shuffle-1][i]];
//	    	}
//
//	    	for(int i = 0; i < 52; i++)
//			{
//				cartas[i] = temp[i];
//			}
//	    	getline(cin,k);
//	    }
//
//	    for(int i = 0; i < 52; i++)
//		{
//			printf("%s of %s\n",cartas[i].valor.c_str(),cartas[i].naipe.c_str());
//		}
//
//		totalCasos--;
////		printf("\n");
//	}
//
//	return 0;
//}
