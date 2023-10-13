#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	float x;
	cout << "Enter x: ";
	cin >> x;

	float S = 0;
	float T = 1;
	int M = 1;
	int i = 1;
	int dau = -1;
	while (i <= n)
	{
		T = T * x;
		M = M * i;
		S = S + dau * (float)T / M;
		i = i + 1;
		dau = -dau;
	}
	cout << "Sum is " << S;
	return 0;
}