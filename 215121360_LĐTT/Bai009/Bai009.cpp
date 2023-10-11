#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter the sides of the regular polygon: ";
	cin >> n;
	float r;
	cout << "Enter the radius of the circle circumscribing the polygon: ";
	cin >> r;
	float s = (float)(n * r * r * sin(2 * 3.14 / n)) / 2;
	cout << "The perimeter of a regular polygon is: " << s;
	return 0;
}