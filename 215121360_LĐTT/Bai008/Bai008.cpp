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
	float p = 2 * n * r * sin(3.14 / n);
	cout << "The perimeter of a regular polygon is: " << p;
	return 0;
}