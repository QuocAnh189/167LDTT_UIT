#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float S = 4 - (float)2 / 4 - (float) 1 / 5 - (float)1 / 6;
	float e = S;
	float T = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		T = T * 16;
		e = ((((float)4 / (8 * i + 1)) - ((float)2 / (8 * i + 4)) - ((float)1 / (8 * i + 5)) - ((float)1 / (8 * i + 6)))) / T;
		S = S + e;
		i = i + 1;
	}
	cout << S;
	return 0;
}