#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int flag = 1;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "Chu so toan chan";
	}
	else
	{
		cout << "Khong la chu so toan chan";
	}
	return 0;
}