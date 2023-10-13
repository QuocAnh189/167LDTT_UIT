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
	float M = 1;
	int i = 0;
	while (i <= n)
	{
		M = M * (x + i);
		S = S + (float)1 / M;
		i = i + 1;
	}
	cout << "Sum is " << S;
	return 0;
}