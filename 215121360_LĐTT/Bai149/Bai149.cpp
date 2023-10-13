#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a;
	cout << "Enter a: ";
	cin >> a;
	int b;
	cout << "Enter b: ";
	cin >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
		{
			m = m - n;
		}
		else
		{
			n = n - m;
		}
	}
	int t = m + n;
	cout << "The largest divisor is " << t;
	return 0;
}