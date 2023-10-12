#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	int t = n;
	int S = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
		{
			S = S + dv;
		}
		t = t / 10;
	}
	cout << "Sum of even digits is " << S;
	return 0;
}