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
	float lc = a;
	if (lc < b)
	{
		lc = b;
	}
	cout << "Result is " << lc;
	return 0;
}