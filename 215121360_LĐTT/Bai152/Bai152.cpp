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
		int dv = t % 3;
		if (dv != 0)
		{
			flag = 0;
		}
		t = t / 3;
	}
	if (flag == 1)
	{
		cout << "Has form 3^m";
	}
	else
	{
		cout << "Not has form 3^m";
	}
	return 0;
}