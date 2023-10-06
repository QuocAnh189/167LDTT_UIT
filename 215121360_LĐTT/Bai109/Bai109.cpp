#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
	float S = 1;
	int M = 1;
	float i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		M = M * i;
		e = 1 / M;
		S = S + e;
		i = i + 1;
	}
	cout << S;
	return 0;
}