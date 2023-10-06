
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
	int i = 1;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		S = S + T;
		i = i + 2;
	}
	cout << "Tong la: " << S;
	return 0;
}