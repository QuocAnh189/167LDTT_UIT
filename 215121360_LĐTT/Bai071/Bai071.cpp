
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
	int i = 1;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		S = S + T;
		i = i + 2;
	}
	cout << "Sum is " << S;
	return 0;
}