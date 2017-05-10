///*
// * UVA_855.cpp
// *
// *  Created on: 23/02/2017
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
//	int testes = 0;
//	scanf("%d",&testes);
//
//	for(int i = 0; i < testes; i++)
//	{
//		vector<int> streets;
//		vector<int> avenues;
//		int totalFriends = 0;
//		int totalStreets = 0;
//		int totalAvenues = 0;
//
//		scanf("%d %d %d",&totalStreets,&totalAvenues,&totalFriends);
//
//		for(int j = 0; j < totalFriends; j++)
//		{
//			scanf("%d %d",&totalStreets,&totalAvenues);
//			streets.push_back(totalStreets);
//			avenues.push_back(totalAvenues);
//		}
//
//		sort(streets.begin(),streets.end());
//		sort(avenues.begin(),avenues.end());
//
//		int midPoint = totalFriends % 2 == 0 ? (totalFriends) / 2 : (totalFriends+1) / 2;
//		int midStreet = streets[midPoint-1];
//		int midAvenue = avenues[midPoint-1];
//
//		printf("(Street: %d, Avenue: %d)\n",midStreet,midAvenue);
//
//	}
//	return 0;
//}
//
//
