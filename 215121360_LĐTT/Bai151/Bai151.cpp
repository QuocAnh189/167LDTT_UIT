#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int n;
	cout << "Enter n: ";
	cin >> n;
	int t = n;
	int flag = 1;
	while (t != 1)
	{
		int dv = t % 2;
		if (dv != 0)
		{
			flag = 0;
		}
		t = t / 2;
	}
	if (flag == 1)
	{
		cout << "Has form 2m";
	}
	else
	{
		cout << "Not has form 2m";
	}
	return 0;
}