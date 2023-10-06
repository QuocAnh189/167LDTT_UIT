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
	while (t != 1)
	{
		int dv = t % 5;
		if (dv != 0)
		{
			flag = 0;
		}
		t = t / 5;
	}
	if (flag == 1)
	{
		cout << "Co dang 5 mu m";
	}
	else
	{
		cout << "Khong co dang 5 mu m";
	}
	return 0;
}