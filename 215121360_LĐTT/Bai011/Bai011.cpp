#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter y1: ";
	cin >> y1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter y2: ";
	cin >> y2;
	cout << "Enter x3: ";
	cin >> x3;
	cout << "Enter y1: ";
	cin >> y3;
	float d1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	float d2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	float d3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	float p = (float)(d1 + d2 + d3) / 2;
	float s = sqrt(p * (p - d1) * (p - d2) * (p - d3));
	cout << "The area of a triangle is made up of 3 points is: " << s;
	return 0;
}