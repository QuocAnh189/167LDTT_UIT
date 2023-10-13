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
	float T = x;
	int i = 1;
	while (i <= n)
	{
		T = sin(T);
		S = S + T;
		i = i + 1;
	}
	cout << "Sum is " << S;
	return 0;
}