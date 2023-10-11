#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float c;
	cout << "Enter C: ";
	cin >> c;
	float f = (float)(9 * c) / 5 + 32;
	cout << "F temperature is: " << f;
	return 0;
}