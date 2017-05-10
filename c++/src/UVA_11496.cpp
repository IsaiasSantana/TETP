///*
// * UVA_11496.cpp
// *
// *  Created on: 23/02/2017
// *      Author: isaias
// */
//
//
//#include <stdio.h>
//
//int main()
//{
//
//	while(true)
//	{
//		int n = 0;
//		scanf("%d",&n);
//
//		if(n == 0) break;
//
//		int vetor[n+1];
//
//		bool sobe = false;
//		bool desce = false;
//
//		int picos = 0;
//
//
//		for(int i = 0; i < n; i++)
//		{
//			scanf("%d",&vetor[i]);
//		}
//
//		 if (vetor[n-1]<vetor[0]) sobe = true;
//		        else desce = true;
//
//		vetor[n] = vetor[0];
//		for(int i = 1; i <= n; i++)
//		{
//			if(vetor[i] > vetor[i-1] && desce)
//			{
//				picos++;
//				desce = false;
//				sobe = true;
//			}
//			else if(vetor[i] < vetor[i-1] && sobe)
//			{
//				picos++;
//				sobe = false;
//				desce = true;
//			}
//		}
//
//
//		printf("%d\n",picos);
//	}
//	return 0;
//}
