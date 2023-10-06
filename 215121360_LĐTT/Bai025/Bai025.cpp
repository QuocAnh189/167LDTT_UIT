#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhao b: ";
	cin >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << "Thu tu: " << a << b;
	return 0;
}