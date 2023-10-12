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
		S = S + dv;
		t = t / 10;
	}
	cout << "The sum of the digits is " << S;
	return 0;
}