//
//#include <iostream>
//#include <sstream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <set>
//#include <cstring>
//#include <cassert>
//#include <list>
//#include <map>
//#include <unordered_map>
//#include <iomanip>
//#include <algorithm>
//#include <functional>
//#include <utility>
//#include <bitset>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstdio>
//#include <limits>
//using namespace std;
//
//
//int main()
//{
//
//
//	int q; cin >> q;
//	deque<int> arr;
//	int head = 0;
//	while(q--)
//	{
//		string s; cin >> s;
//		if(s[0] == 'b')
//		{
//			if(arr.empty())
//			{
//				cout << "No job for Ada?\n";
//				continue;
//			}
//			if(head == 0)
//			{
//				cout << arr.back() << "\n";
//				arr.pop_back();
//			}
//			else
//			{
//				cout << arr.front() << "\n";
//				arr.pop_front();
//			}
//		}
//		if(s[0] == 'f')
//		{
//
//			if(arr.empty())
//			{
//				cout << "No job for Ada?\n";
//				continue;
//			}
//			if(head == 0)
//			{
//				cout << arr.front() << "\n";
//				arr.pop_front();
//			}
//			else
//			{
//				cout << arr.back() << "\n";
//				arr.pop_back();
//			}
//		}
//
//		if(s[0] == 'p')
//		{
//			int ele; cin >> ele;
//			if(head == 0)
//				arr.push_back(ele);
//			else
//				arr.push_front(ele);
//		}
//		if(s[0] == 't')
//		{
//			int ele; cin >> ele;
//			if(head == 0)
//				arr.push_front(ele);
//			else
//				arr.push_back(ele);
//
//		}
//		if(s[0] == 'r')
//			head ^= 1;
//	}
//	return 0;
//}
//
