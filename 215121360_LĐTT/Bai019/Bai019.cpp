#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x;
	cout << "Enter x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x13 = x8 * x4;
	cout << "x13 = " << x13;
	return 0;
}