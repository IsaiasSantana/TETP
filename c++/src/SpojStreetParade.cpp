//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//int a[1111], n;
//
//int main()
//{
//  while (scanf("%d", &n) && n != 0)
//  {
//	  vector<int> carros;
//
//    for (int i = 0; i < n; i++)
//    	{
//    		int x = 0;
//    		scanf("%d", &x);
//    		carros.push_back(x);
//    	}
//
//    int j = 0, i = 0;
//
//    stack<int> pilha;
//
//    while (i < n)
//    {
//      while (pilha.size() && pilha.top() == j + 1)
//    	  	 j++, pilha.pop();
//
//      	  if (a[i] != j + 1) pilha.push(carros[i]);
//      	  else
//      		  j++;
//      	  i++;
//    }
//    while (pilha.size() && pilha.top() == j + 1) j++, pilha.pop();
//    puts(j == n ? "yes" : "no");
//  }
//}
