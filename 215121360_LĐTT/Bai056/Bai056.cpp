#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dem = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
		{
			dem = dem + 1;
		}
		i = i + 2;
	}
	cout << "So luong cac uoc so chan la: " << dem;
	return 0;
}