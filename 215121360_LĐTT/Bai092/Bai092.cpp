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

	float S = 1 - x;
	float T = 1;
	int M = 1;
	int i = 1;
	int dau = 1;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		M = M * i * (i - 1);
		S = S + dau * (float)T / M;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la: " << S;
	return 0;
}