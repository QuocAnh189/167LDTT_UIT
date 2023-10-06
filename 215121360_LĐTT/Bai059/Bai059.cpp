#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int t = n;
	int dem = 0;
	while (t != 0)
	{
		dem = dem + 1;
		t = t / 10;
	}
	cout << "So luong cac chu so la: " << dem;
	return 0;
}