#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x, y, z;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	if (x + y < z && x + z < y && y + z < x)
	{
		if (x == y && x == z)
		{
			cout << "This is an equilateral triangle";
		}
		else
		{
			if (x * x == y * y + z * z || y * y == y * y + x * x || z * z == y * y + x * x)
			{
				if (x == y || x == z || y == z)
				{
					cout << "This is an isosceles right triangle";
				}
				else
				{
					cout << "This is a right triangle";
				}
			}
			else
			{
				if (x == y || x == z || y == z)
				{
					cout << "This is an isosceles triangle";
				}
				else
				{
					cout << "This is an normal triangle";
				}
			}
		}
	}
	else
	{
		cout << "Khong ton tai tam giac";
	}
	return 0;
}