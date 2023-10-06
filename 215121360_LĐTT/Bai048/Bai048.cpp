#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * (x * (x + i));
		i = i + 1;
	}
	cout << "Tong la: " << T;
	return 0;
}