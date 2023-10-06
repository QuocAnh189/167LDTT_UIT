#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float S = x;
	float T = x;
	int i = 3;
	int dau = -1;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		S = S * dau * T;
		dau = -dau;
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 0;
}