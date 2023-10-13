#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	if (n % 4 == 0 && n % 100 != 0 || (n % 400 == 0))
	{
		cout << "This is a leap year";
	}
	else
	{
		cout << "This is a non-leap year";
	}
	return 0;
}
