#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
	{
		cout << "La so doi dung";
	}
	else
	{
		cout << "Khong la so doi xung";
	}
	return 0;
}