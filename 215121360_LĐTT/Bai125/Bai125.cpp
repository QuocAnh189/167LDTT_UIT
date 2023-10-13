#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a;
	cout << "Enter a: ";
	cin >> a;
	float b;
	cout << "Enter b: ";
	cin >> b;
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	cout << a << " " << b;
	return 0;
}