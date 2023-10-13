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
	float c;
	cout << "Enter c: ";
	cin >> c;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	cout << a << " " << b << " " << c;
	return 0;
}