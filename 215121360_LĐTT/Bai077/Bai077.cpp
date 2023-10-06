#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float k;
	cout << "Nhap k: ";
	cin >> k;

	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + pow(i, k);
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 0;
}