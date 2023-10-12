#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			cout << "i"
				 << " ";
		}
		i = i + 1;
	}
	return 0;
}