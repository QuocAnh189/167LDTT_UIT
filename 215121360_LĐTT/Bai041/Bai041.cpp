#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + i * (i + 1) * (i + 2);
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 0;

}