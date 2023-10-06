#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float S = 1;
	float T = 1;
	int M = 1;
	float i = 1;
	float e = 1;
	float dau = -1;
	while (e >= pow(10, -6))
	{
		T = T * x;
		M = M * i;
		e = T / M;
		S = S + e;
		i = i + 1;
	}
	cout << S;
	return 0;
}