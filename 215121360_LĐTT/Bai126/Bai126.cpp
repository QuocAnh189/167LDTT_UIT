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
	float lc = a;
	if (lc < b)
	{
		lc = b;
	}
	cout << lc;
	return 0;
}