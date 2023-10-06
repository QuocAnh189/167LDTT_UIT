#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	float s = (float)(43.14 * r * r * r) / 3;
	cout << "The tich hinh tron la: " << s;
	return 0;
}