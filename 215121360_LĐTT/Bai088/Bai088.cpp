#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int M = 0;
	float S = 0;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		M = M + i;
		S = S + dau * (float)1 / M;
		i = i + 1;
	}
	cout << "Sum is " << S;
	return 0;
}