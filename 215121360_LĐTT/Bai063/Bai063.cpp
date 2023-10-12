#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	int t = n;
	int T = 1;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
		{
			T = T * dv;
		}
		t = t / 10;
	}
	cout << "The product of odd digits is " << T;
	return 0;
}