///*
// * URI_1183.cpp
// *
// *  Created on: 10/02/2017
// *      Author: isaias
// */
//
//#include <stdio.h>
//
//#define MAX_LINHA  12
//#define MAX_COLUNA 12
//
//double matriz[MAX_LINHA][MAX_COLUNA];
//
//int main()
//{
//	char entrada = ' ';
//
//	double soma = 0.0;
//	double media = 0.0;
//
//	int contador = 0;
//
//	scanf("%c",&entrada);
//
//	for(int i = 0; i < MAX_LINHA; i++)
//	{
//		for(int j = 0; j < MAX_COLUNA; j++)
//		{
//			double entrada = 0;
//			scanf("%lf",&entrada);
//			matriz[i][j] = entrada;
//		}
//	}
//
//	for(int i = 0; i < MAX_LINHA; i++)
//	{
//		for(int j = i + 1; j < MAX_COLUNA; j++)
//		{
//			soma+=matriz[i][j];
//			contador++;
//		}
//	}
//
//	if(entrada == 'S')
//	{
//		printf("%.1lf\n",soma);
//	}else{
//		media = (soma/contador);
//		printf("%.1lf\n",media);
//	}
//
//}
//
//
//
