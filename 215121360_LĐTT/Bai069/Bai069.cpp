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

	int S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + T;
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 0;
}