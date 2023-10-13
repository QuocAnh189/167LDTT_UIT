#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int i = 1;
	int dem = 0;
	while (i < n)
	{
		if (n % i == 0)
		{
			dem = dem + 1;
		}
		i = i + 1;
	}
	if (dem == 2)
	{
		cout << "Prime";
	}
	else
	{
		cout << "Not Prime";
	}
}