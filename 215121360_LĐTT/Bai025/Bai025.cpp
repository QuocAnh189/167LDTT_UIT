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

	int temp = a;
	a = b;
	b = temp;
	cout << "Swap: "
		 << "a = " << a << " b = " << b;
	return 0;
}