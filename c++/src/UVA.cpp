/////*
//// * UVA.cpp
//// *
//// *  Created on: 02/03/2017
//// *      Author: isaias
//// */
////#include <iostream>
////#include <algorithm>
////#include <string>
////#include <vector>
////#include <sstream>
////
////using namespace std;
////
////struct Contestants
////{
////    int problemasResolvidos;
////    int tempo;
////    int numeroTime;
////    bool submeteu;
////
////    Contestants(int TN, bool P)
////    {
////        numeroTime = TN;
////        submeteu = P;
////        tempo = 0;
////        problemasResolvidos = 0;
////    }
////
////};
////
////bool compare(Contestants c1, Contestants c2)
////{
////
////    if (c1.problemasResolvidos != c2.problemasResolvidos)
////        return c1.problemasResolvidos > c2.problemasResolvidos;
////
////    if (c1.tempo != c2.tempo)
////        return c1.tempo < c2.tempo;
////
////    return c1.numeroTime < c2.numeroTime;
////}
////int main ()
////{
////    int casosTeste;
////
////    scanf("%d\n",&casosTeste);
////
////    for (int i=0; i<casosTeste; i++)
////    {
////        scanf("\n");
////
////        vector<Contestants> scores;
////        vector<pair<char,int> > board[101][10];
////
////        for (int i=0; i<101; i++) scores.push_back(*(new Contestants(i, false)));
////
////        char input [100];
////
////        while(fgets(input,100,stdin) != NULL)
////        {
////            if (input[0] == '\n') break;
////
////            pair<char,int> PenalidadeETipoSubmicao;
////
////            stringstream entrada(input);
////
////            int time,problema;
////
////            entrada >> time >> problema >> PenalidadeETipoSubmicao.second >> PenalidadeETipoSubmicao.first;
////
////            scores[time].submeteu = true;
////            if (PenalidadeETipoSubmicao.first == 'C' || PenalidadeETipoSubmicao.first == 'I')
////            {
////
////            	 board[time][problema].push_back(PenalidadeETipoSubmicao);
////            }
////
////        }
////
////        for (unsigned j = 0; j < scores.size(); j++)
////        {
////            scores[j].tempo = 0;
////            scores[j].problemasResolvidos = 0;
////
////            for (int k=1; k< 10; k++)
////            {
////                vector<pair<char,int> > Messages = board[j][k];
////                int PenaltyTime=0;
////
////                for (unsigned h=0; h< Messages.size(); h++)
////                {
////                    if (Messages[h].first == 'I') PenaltyTime+= 20;
////                    else if (Messages[h].first == 'C')
////                    {
////                        PenaltyTime += Messages[h].second;
////                        scores[j].problemasResolvidos++;
////                        scores[j].tempo += PenaltyTime;
////                        break;
////                    }
////                }
////            }
////        }
////
////        sort(scores.begin(), scores.end(), compare);
////
////        for (unsigned i=0; i<scores.size(); i++)
////            if (scores[i].submeteu) printf("%d %d %d\n", scores[i].numeroTime, scores[i].problemasResolvidos, scores[i].tempo);
////
////        if (i != casosTeste-1) printf("\n");
////    }
////
////    return 0;
////}
////
////
////
//
//
///*
// * Sai Cheemalapati
// * UVA 514: Rails
// *
// */
//
//#include<cstdio>
//#include<stack>
//
//using namespace std;
//
//int N, c;
//stack<int> cars;
//
////void marshal() {
////    for(;;)
////    {
////        while(cars.size() > 0) cars.pop();
////        int j = 0;
////
////        for(int i = 0; i < N; i++)
////        {
////            scanf("%d", &c);
////            if(c == 0) return;
////
////            while(j < N && j != c) {
////                if(cars.size() > 0 && cars.top() == c) break;
////                j++;
////                cars.push(j);
////            }
////            if(cars.top() == c) cars.pop();
////        }
////        if(cars.size() == 0)
//
////    }
////}
//
//int main()
//{
//
//	int n = 0 , train = 0;
//
//	bool para = false;
//
//	scanf("%d",&n);
//
//	while(n)
//	{
//		stack<int> trains;
//
//		while(true)
//		{
//			int vagao = 0;
//
//
//			for(int i = 0; i < n; i++)
//			{
//				scanf("%d",&train);
//
//				if(train == 0)
//				{
//					para  = true;
//					break;
//				}
//				else
//				{
//					while(vagao < n && vagao != train)
//					{
//						if(!trains.empty() && trains.top() == train) break ;
//						vagao++;;
//						trains.push(vagao);
//					}
//
//					if(trains.top() == train) trains.pop();
//				}
//			}
//
//			if(para) break;
//
//			if(trains.empty())
//				printf("Yes\n");
//			else
//				printf("No\n");
//
//			while (!trains.empty()) trains.pop();
//
//		}
//
//		printf("\n");
//
//		scanf("%d",&n);
//		para = false;
//		train = 0;
//	}
//}
