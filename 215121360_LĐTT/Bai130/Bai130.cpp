#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float y;
	cout << "Nhap y: ";
	cin >> y;
	float z;
	cout << "Nhap z: ";
	cin >> z;
	if (y + z > x && z + x > y && x + y > z)
	{
		cout << "La tam giac";
	}
	else
	{
		cout << "Khong ton tai tam giac";
	}
	return 0;
}