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
	int M = 0;
	int i = 1;
	while (i <= n)
	{
		M = M + i;
		S = S + (float)1 / M;
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 0;
}