#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2;
	int ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		at = ahh;
		i = i + 1;
	}
	cout << ahh;
	return 0;
}