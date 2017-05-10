//#include <iostream>
//
//using namespace std;
//
//int main(){
//
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	cin >> n;
//
//	while(n--)
//	{
//		cin >> a >> b >> c;
//		bool parada = false;
//
//		for(int x = -100; x <= 100; x++)
//		{
//			for(int y = -100; y <= 100; y++)
//			{
//				for(int z = -100; z <= 100; z++)
//				{
//					if(x != y && y != z && x != z)
//					{
//						if(x+y+z == a && x*y*z == b && x*x+y*y+z*z == c)
//						{
//							parada = true;
//							   cout << x << " " << y << " " << z << endl;
//							break;
//						}
//					}
//				}
//				if(parada) break;
//			}
//			if(parada) break;
//		}
//
//		if(!parada) cout << "No solution." << endl;
//	}
//
//	return 0;
//}
