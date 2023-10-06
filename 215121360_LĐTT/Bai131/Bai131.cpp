#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Nhap x3: ";
	cin >> x3;
	cout << "Nhap y1: ";
	cin >> y3;
	float d1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	float d2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	float d3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	if (d1 + d2 > d3 && d1 + d3 > d2 && d2 + d3 > d1)
	{
		cout << "La tam giac";
	}
	else
	{
		cout << "Khong ton tai tam giac";
	}
	return 0;
}