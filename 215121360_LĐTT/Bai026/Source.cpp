#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhao b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Thu tu: " << a << b;
	return 0;
}