#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	if (x + y < z && x + z < y && y + z < x)
	{
		if (x == y && x == z)
		{
			cout << "TG deu";
		}
		else
		{
			if (x * x == y * y + z * z || y * y == y * y + x * x || z * z == y * y + x * x)
			{
				if (x == y || x == z || y == z)
				{
					cout << "TG Vuong can";
				}
				else
				{
					cout << "TG Vuong";
				}
			}
			else
			{
				if (x == y || x == z || y == z)
				{
					cout << "TG can";
				}
				else
				{
					cout << "TG thuong";
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