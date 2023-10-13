#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	float S = 0;
	int i = 2;
	while (i <= n)
	{
		S = pow(i + S, 1 / i);
		i = i + 1;
	}
	cout << "Result is " << S;
	return 0;
}