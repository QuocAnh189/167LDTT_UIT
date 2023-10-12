#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	int t = n;
	int lc = t % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	cout << "The largest digit is " << lc;
	return 0;
}