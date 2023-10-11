#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float f;
	cout << "Enter F: ";
	cin >> f;
	float c = (float)(5 * f) / 9 - 32;
	cout << "C temperature is:" << c;
	return 0;
}