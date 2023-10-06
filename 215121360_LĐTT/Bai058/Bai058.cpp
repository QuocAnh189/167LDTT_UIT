#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int t = n;
	int S = 0;
	while (t !=0)
	{
		int dv = t % 10;
		S = S + dv;
		t = t / 10;
	}
	cout << "Tong cac chu so la: " << S;
	return 0;
}