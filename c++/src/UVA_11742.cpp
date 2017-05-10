// UVa 11742 - Social Constraints
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m,a,b;
	cin >> n >> m;

	while (n || m)
	{
		int abc[20][3], permutacoes[8];

		for (int k = 0; k < m; k++) cin >> abc[k][0] >> abc[k][1] >> abc[k][2];

		for (int i = 0; i < n; i++) permutacoes[i] = i;

		long int totalPermutacoes = 0;
		do
		{
			bool permuta = true;

			for (int contRestricao = 0; contRestricao < m; contRestricao++)
			{

				for (int i = 0; i < n; i++)
					if (permutacoes[i] == abc[contRestricao][0])
					{
						a = i;
						break;
					}


				for (int j = 0; j < n; j++)

					if (permutacoes[j] == abc[contRestricao][1])
					{
						b = j;
						break;
					}

				if (abc[contRestricao][2] > 0 && abs(a - b) > abc[contRestricao][2])
				{
					permuta = false;
					break;
				}

				if (abc[contRestricao][2] < 0 && abs(a - b) < -abc[contRestricao][2])
				{
					permuta = false;
					break;
				}
			}
			if (permuta)
				totalPermutacoes++;
		} while (next_permutation(permutacoes, permutacoes + n));
		cout << totalPermutacoes << endl;
		cin >> n >> m;
	}

	return 0;
}
