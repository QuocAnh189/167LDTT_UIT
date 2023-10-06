#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int t = n;
	int T = 1;
	while (t != 0)
	{
		int dv = t % 10;
		T = T * dv;
		t = t / 10;
	}
	cout << "Tich cac chu so la: " << T;
	return 0;
}