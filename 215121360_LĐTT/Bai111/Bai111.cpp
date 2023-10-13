#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float S = 3;
	float e = 3;
	int i = 2;
	int M = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		M = i * (i + 1) * (i + 2);
		e = (float)4 / M;
		S = S + dau * e;
		i = i + 2;
		dau = -dau;
	}
	cout << "Result is " << S;
	return 0;
}