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

	float S = x;
	float T = x;
	int i = 3;
	int dau = -1;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		S = S * dau * T;
		dau = -dau;
		i = i + 1;
	}
	cout << "Sum is " << S;
	return 0;
}