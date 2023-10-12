#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	int T = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			T = T * i;
		}
		i = i + 1;
	}
	cout << "The product of divisors is " << T;
	return 0;
}