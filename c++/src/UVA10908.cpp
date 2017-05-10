///*
// * UVA10908.cpp
// *
// *  Created on: 06/04/2017
// *      Author: isaias
// */
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
////int main()
////{
////	int testes = 0;
////	scanf("%d",&testes);
////
////	while(testes--)
////	{
////		int linhas = 0;
////		int colunas = 0;
////		int consultas = 0;
////
////		scanf("%d %d %d",&linhas,&colunas,&consultas);
////
////		char mat[linhas][colunas];
////
////		cin.ignore(256,'\n');
////		        for(int i=0;i<linhas;i++)
////		            cin.getline(mat[i],linhas*colunas);
////
////		cout<<linhas<<" "<<colunas<<" "<<consultas<<endl;
////
////		while(consultas--)
////		{
////			int centroLinha,centroColuna;
////			int resposta = 1;
////			bool parada = false;
////			int passos = 1;
////
////			scanf("%d %d",&centroLinha,&centroColuna);
////			while(true)
////			{
////
////				for(int i = centroLinha-passos; i <= centroLinha + passos; i++)
////				{
////					for(int j = centroColuna-passos; j <= centroColuna + passos; j++)
////					{
////						if(i < 0 || j < 0 || i >= linhas || j >= colunas || mat[i][j] != mat[centroLinha][centroColuna])
////						{
////							parada = true;
////							break;
////						}
////
////					} // fim do for interno
////
////				} // fim do for externo
////
////				if(parada) break;
////				else
////					resposta+=2;
////
////				passos++;
////
////			}// fim do laço infinito;
////
////			printf("%d\n",resposta);
////
////		} // fim das consultas
////
////	} // fim dos casos de testes
////	return 0;
////}
//
//int main()
//{
//   int a,b,c,d,n;
//
//   for(n=6; n<= 200; n++)
//   {
//       a = n*n*n;
//        for(int i=2; i<n; i++)
//       {
//           b = i*i*i;
//           for(int j=i; j<n ;j++)
//           {
//               c = j*j*j;
//               for(int k=j;k<n;k++)
//               {
//                   d = k*k*k;
//                   if(a==(b+c+d))
//                   {
//                	   printf("Cube = %d, Triple = (%d,%d,%d)\n",n,i,j,k);
//                   }
//
//               }
//           }
//       }
//   }
//    return 0;
//}
