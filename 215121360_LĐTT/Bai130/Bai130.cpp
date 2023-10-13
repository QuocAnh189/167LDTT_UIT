#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x;
	cout << "Enter x: ";
	cin >> x;
	float y;
	cout << "Enter y: ";
	cin >> y;
	float z;
	cout << "Enter z: ";
	cin >> z;
	if (y + z > x && z + x > y && x + y > z)
	{
		cout << "This is the triangle";
	}
	else
	{
		cout << "This is not the triangle";
	}
	return 0;
}