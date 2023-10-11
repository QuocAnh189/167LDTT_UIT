#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float r;
	cout << "Enter Radius: ";
	cin >> r;
	float s = 4 * 3.14 * r * r;
	cout << "Circle Surrounding area is: " << s;
	return 0;
}