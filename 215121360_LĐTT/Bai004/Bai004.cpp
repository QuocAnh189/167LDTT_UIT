#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	float s = 4 * 3.14 * r * r;
	cout << "Dien tich xung quanh hinh tron la: " << s;
	return 0;
}