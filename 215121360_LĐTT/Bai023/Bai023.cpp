#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int tens = (n / 10) % 10;
	cout << "The tens digit is " << tens;
	return 0;
}