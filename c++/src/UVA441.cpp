//#include <stdio.h>
//
//using namespace std;
//
//int main()
//{
//	int k = 0;
//
//	scanf("%d",&k);
//
//	while(true)
//	{
//		if(k == 0) break;
//
//		int s[k];
//
//		for(int i = 0; i < k; i++)
//		{
//			scanf("%d",&s[i]);
//		}
//
//		for(int a = 0; a < k; a++)
//		{
//			for(int b = a+1; b < k; b++)
//			{
//				for(int c = b+1; c < k; c++)
//				{
//					for(int d = c + 1 ; d < k; d++)
//					{
//						for(int e = d + 1; e < k; e++)
//						{
//							for(int f = e + 1; f < k; f++)
//							{
//								printf("%d %d %d %d %d %d\n",s[a],s[b],s[c],s[d],s[e],s[f]);
//							}
//						}
//					}
//				}
//			}
//		}
//		scanf("%d",&k);
//		if(k) printf("\n");
//
//	}
//
//	return 0;
//}
