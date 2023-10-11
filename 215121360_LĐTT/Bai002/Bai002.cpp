#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float r;
	cout << "Enter Radius: ";
	cin >> r;
	float s = 3.14 * r * r;
	cout << "Circle area is: " << s;
	return 0;
}