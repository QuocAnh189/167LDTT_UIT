#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int n;
	cout << "Enter n: ";
	cin >> n;
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int lc = t % 10;
		int dv = (t / 10) % 10;
		if (dv > lc)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "Ascending";
	}
	else
	{
		cout << "Not Ascending";
	}
	return 0;
}