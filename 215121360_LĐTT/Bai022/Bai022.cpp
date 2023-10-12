#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int unit = n % 10;
	cout << "The units digit is " << unit;
	return 0;
}