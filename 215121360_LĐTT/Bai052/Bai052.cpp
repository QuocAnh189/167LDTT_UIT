#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			dem = dem + 1;
		}
		i = i + 1;
	}
	cout << "So luong cac uoc so la: " << dem;
	return 0;
}