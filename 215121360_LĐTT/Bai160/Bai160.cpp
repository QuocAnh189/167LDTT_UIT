#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int n;
	cout << "Enter n: ";
	cin >> n;
	int dem = 0;
	int lc = n % 10;
	int t = n;
	while (t >= 10)
	{
		t = t / 10;
		lc = t;
	}
	int a = n;
	while (a != 0)
	{
		int dv = a % 10;
		if (dv == lc)
			dem = dem + 1;
		a = a / 10;
	}
	cout << "The first number of digits is " << dem;
	return 0;
}