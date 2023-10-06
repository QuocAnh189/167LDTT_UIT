#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	float x;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << 'VSNS';
		}
		else
		{
			cout << "VN";
		}
	}
	else
	{
		x = -b / a;
	}
	cout << x;
	return 0;

}