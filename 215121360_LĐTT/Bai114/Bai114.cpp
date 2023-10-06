#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int aa = 3;
	int pp = 7;
	float at = -2;
	float ahh;
	int i = 2;
	while (i <= n)
	{
		aa = aa * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * aa - 6 * pp + 12;
		at = ahh;
		i = i + 1;
	}
	cout << ahh;
	return 0;
}