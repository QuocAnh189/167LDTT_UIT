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
	int M = 0;
	int i = 1;
	while (i <= n)
	{
		M = M + i;
		S = S + (float)1 / M;
		i = i + 1;
	}
	cout << "Sum is " << S;
	return 0;
}