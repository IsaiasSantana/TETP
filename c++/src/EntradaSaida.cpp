//////============================================================================
////// Name        : EntradaSaida.cpp
////// Author      :
////// Version     :
////// Copyright   : Your copyright notice
////// Description : Hello World in C++, Ansi-style
//////============================================================================
////
////#include <iostream>
////#include <iomanip>
////#include <math.h>
////#include<string>
////#include<stdio.h>
////
////using namespace std;
////
////class PeoplesDeath
////{
////	public:
////		PeoplesDeath()
////		{
////			this->numberDeath = 0;
////			this->numberPeoples = 0;
////		};
////		PeoplesDeath(int numberPeoples, int numberDeath)
////		:numberPeoples(numberPeoples),
////		 numberDeath(numberDeath) {};
////		int numberPeoples;
////		int numberDeath;
////
////};
////
////int josephus(int n,int k)
////{
////
////      if(n==1)
////      return 1;
////      else{
////    	  int x = (josephus(n-1,k)+k-1)%n+1;
////    	//	cout << "josephus n = "<<n<<" is equal "<<x<<endl;
////    	  return  x;
////      }
////
////}
////
////int main()
////{
//////	const double PI = 3.14159;
//////	double input = 0.0;
//////	double response = 0.0000;
//////
//////	cin >> input;
//////	response = PI * input*input;
//////	cout<<"A="<<fixed<<setprecision(4)<<response<<endl;
////
//////	double x1,x2,y1,y2;
//////	cin >> x1 >> y1 >> x2 >> y2;
//////
//////	double result = sqrt((pow(x2-x1,2) + pow(y2-y1,2)));
//////
//////	cout <<fixed<< setprecision(4)<<result<< endl;
////
//////	int input = 0;
//////	cin >> input;
//////	int second = input % 60;
//////	int minute = (input / 60)%60;
//////	int hour = input / (60*60);
//////	cout <<hour<<":"<<minute<<":"<<second<<endl;
////
//////	unsigned int inputA = 0, inputB = 0;
//////
//////	while((cin >> inputA >> inputB))
//////	{
//////		cout << (inputA ^ inputB)<<endl;
//////	}
////	//cout << josephus(17,1);
////	int numberCase = 0;
////	int numberPeoples = 0;
////	int numberDeath = 0;
////	int cont = 1;
////
////	cin >> numberCase;
////
////	while(numberCase > 0)
////	{
////		cin >> numberPeoples >> numberDeath;
////
////		int total = 2;
////		int resp = 1;
////		int passos = 0;
////
////		cout << "Resposta "<< resp<<endl;
////		while(total <= numberPeoples)
////		{
////
////			resp = (resp + (numberDeath-1))%(total++) + 1;
////			++passos;
////
////
////			cout << "Resposta "<< resp<<endl;
////		}
////
////		cout << "Case "<<cont++ << ": " << resp<< "Passos "<<passos<< endl;
////		resp = 1;
////		--numberCase;
////	}
////
//////	int index = -1,count = 0,countAlive = 0, indexAlive = 0;
//////	int vector[10000];
//////
////////	cin >> numberCase;
//////	scanf("%d",&numberCase);
//////	int *response = new int[numberCase];
//////
//////
//////	for(int i = 0; i < numberCase; i++)
//////	{
//////		scanf("%d %d",&numberPeoples,&numberDeath);
////////		cin >> numberPeoples >> numberDeath;
//////
//////
//////		for(int j = 0; j < numberPeoples; j++)
//////			vector[j] = j+1;
//////
//////		while(count <= numberPeoples-1)
//////		{
//////			index = (index + 1) % numberPeoples;
//////			if(vector[index] != 0)
//////			{
//////				++countAlive;
//////				if(countAlive == numberDeath)
//////				{
//////					vector[index] = 0;
//////					countAlive = 0;
//////					++count;
//////				}
//////			 indexAlive = index;
//////			}
//////		}
//////		response[i] = indexAlive+1;
//////		index = -1,count = 0,countAlive = 0, indexAlive = 0;
//////		printf("Case %d: %d\n",i+1,response[i]);
//////	//	cout <<"Case "<< i+1<< ": "<< response[i]<< endl;
//////	}
////
////
////	return 0;
////}
//	int n = 0;
//	string s = "";
//
//	cin >> n;
//
//
//	while(n > 0)
//	{
//		cin >> s;
//
//		if(s.size() > 10)
//		{
//			cout << s[0] <<s.size()-2<<s[s.size()-1]<<endl;
//		}
//		else
//			cout << s<<endl;
//		--n;
//	}




//	  int altura = 0;
//	  int largura = 0;
//	  int area = 0;
//	long long int quadradosOcupadosLargura = 0;
//	long long int restantes  = 0;
//
//
//	cin >> altura >> largura >> area;
//
//	quadradosOcupadosLargura = largura / area;
//	restantes = quadradosOcupadosLargura;
//
//	long long int restoLargura = largura % area;
//
//	if(area == 1)
//		quadradosOcupadosLargura = altura * largura;
//	else
//		if(restoLargura)
//		{
//			long long int restantesLargura = 1;
//
//			altura-=area;
//
//			while(altura > 0)
//			{
//				quadradosOcupadosLargura+=restantes;
//				altura-=area;
//				restantesLargura+=1;
//			}
//
//			quadradosOcupadosLargura+= restantesLargura;
//		}
//		else
//		{
//			altura-=area;
//
//			while(altura > 0)
//			{
//				quadradosOcupadosLargura*=2;
//				altura-=area;
//			}
//		}
//
//	cout << quadradosOcupadosLargura << endl;
