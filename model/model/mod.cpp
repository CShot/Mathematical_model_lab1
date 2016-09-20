#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	float N;
	int k;
	int A1, A2, B;
	float res;
	float c = 0;
	cout << "Введите число повторов эксперимента" << endl;
	cin >> N;
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		A1 = rand() % 30 + 1;
		A2 = rand() % 29 + 1;
		B = rand() % 28 + 1;
		if (((A1 <= 25) && (A2 <= 25)) || ((A1 <= 25) && (B <= 25)) || (((B <= 25) && (A2 <= 25))))
		{
			c = c + 1;
		}
		/*cout << A1 << endl;*/
	}
	res = c / N;
	cout << "Относительная частота эксперемента:"<< endl << c << "/" << N << "=" ;
	printf("%.4f\n", res);
	return 0;

}