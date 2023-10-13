#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
	{
		cout << "symmetric number";
	}
	else
	{
		cout << "Not symmetric number";
	}
	return 0;
}