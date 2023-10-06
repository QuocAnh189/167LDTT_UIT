
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

	float S = x + 1;
	float T = 1;
	int M = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		M = M + i * (i - 1);
		S = S + (float)T / M;
		i = i + 2;
	}
	cout << "Tong la: " << S;
	return 0;
}