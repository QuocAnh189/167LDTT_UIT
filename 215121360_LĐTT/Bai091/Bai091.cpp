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

	float S = -1;
	float T = 1;
	int M = 1;
	int i = 2;
	int dau = 1;
	while (i <= 2 * n)
	{
		T = T * x * x;
		M = M * i * (i - 1);
		S = S + dau * (float)T / M;
		i = i + 2;
		dau = -dau;
	}
	cout << "Sum is " << S;
	return 0;
}