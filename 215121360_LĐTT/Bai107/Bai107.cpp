#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x;
	cout << "Enter x: ";
	cin >> x;
	float a = (x * 3.14) / 180;
	float S = 1;
	float T = 1;
	int M = 1;
	float e = 1;
	int i = 2;
	float dau = -1;
	while (e >= pow(10, -6))
	{
		T = T * x * x;
		M = M * i * (i - 1);
		e = T / M;
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "Result is " << S;
	return 0;
}