#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float at = 3;
	float att = -1;
	float ahh;
	int i = 1;
	while (i <= n)
	{
		ahh = 5 * at + 6 * att;
		att = at;
		at = ahh;
		i = i + 1;
	}
	cout << ahh;
	return 0;
}