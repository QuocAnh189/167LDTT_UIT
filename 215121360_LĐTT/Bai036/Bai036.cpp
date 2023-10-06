#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int T = 1;
	int i = 1;
	while (i <=  n)
	{
		T = T * x;
	}
	cout << "Tong la: " << T;
	return 0;

}