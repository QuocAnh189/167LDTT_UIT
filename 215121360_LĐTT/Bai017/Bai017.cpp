#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x;
	cout << "Enter x: ";
	cin >> x;
	float x2 = x * x;
	float x3 = x2 * x;
	float x5 = x2 * x3;
	float x6 = x3 * x3;
	float x11 = x5 * x6;
	cout << "x11 = " << x11;
	return 0;
}