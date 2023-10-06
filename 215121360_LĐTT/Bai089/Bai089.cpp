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

	float S = 0;
	float T = 1;
	int M = 0;
	int i = 1;
	int dau = -1;
	while (i <= n)
	{
		T = T * x;
		M = M + i;
		S = S + dau * (float)T / M;
		dau = -dau;
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 0;
}