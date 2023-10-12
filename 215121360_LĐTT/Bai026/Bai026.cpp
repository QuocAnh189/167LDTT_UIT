#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Swap: "
		 << "a = " << a << " b = " << b;
	return 0;
}