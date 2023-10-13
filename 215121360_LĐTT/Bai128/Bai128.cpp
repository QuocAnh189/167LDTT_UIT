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
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << a << " " << b;
	return 0;
}