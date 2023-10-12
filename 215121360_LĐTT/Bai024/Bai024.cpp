#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int ht = (n / 100) % 10;
	cout << "The hundreds digit is " << ht;
	return 0;
}