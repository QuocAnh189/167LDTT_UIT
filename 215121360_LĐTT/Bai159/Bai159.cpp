#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int lc = n % 10;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	int a = n;
	int ss;
	while (a != 0)
	{
		ss = a % 10;
		if (ss == lc)
			dem = dem + 1;
		a = a / 10;
	}
	cout << "So luong chu so nho nhat la: " << dem;
	return 0;
}