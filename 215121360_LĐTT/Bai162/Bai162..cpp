#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int lc = t % 10;
		int dv = (t / 10) % 10;
		if (dv < lc)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "Giam dan";
	}
	else
	{
		cout << "Khong giam dan: ";
	}
	return 0;
}