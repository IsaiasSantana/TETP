///*
// * UVA_10474.cpp
// *
// *  Created on: 12/02/2017
// *      Author: isaias
// */
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int totalMarbles = 0;
//	int totalConsultas = 0;
//	int casos = 1;
//
//	while(true)
//	{
//		scanf("%d %d",&totalMarbles,&totalConsultas);
//
//		if(totalMarbles == 0 && totalConsultas == 0) break;
//
//		vector<int> marbles(totalMarbles);
//		vector<int> consultas(totalConsultas);
//
//		for(int i = 0; i < totalMarbles; i++)
//		{
//			int marble = 0;
//			scanf("%d",&marble);
//			marbles[i] = (marble);
//		}
//
//		for(int i = 0; i < totalConsultas; i++)
//		{
//			int marble = 0;
//			scanf("%d",&marble);
//			consultas[i] = (marble);
//		}
//
//		sort(marbles.begin(),marbles.end());
//
//		printf("CASE# %d:\n",casos++);
//
//		for(int i : consultas)
//		{
//			bool encontrou = false;
//
//			for(unsigned marble = 0; marble < marbles.size(); marble++)
//			{
//				if(i == marbles[marble])
//				{
//					printf("%d found at %d\n",i,marble+1);
//					encontrou = true;
//					break;
//				}else if(marbles[marble] > i) break;
//			}
//
//			if(!encontrou) printf("%d not found\n",i);
//		}
//	}
//
//	return 0;
//}
