#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x1, y1;
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter y1: ";
	cin >> y1;

	float x2, y2;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter y2: ";
	cin >> y2;

	float d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << "Distance: " << d;
	return 0;
}