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
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "The digits are all even numbers";
	}
	else
	{
		cout << "The digits are not all odd numbers";
	}
	return 0;
}