#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float at = 1;
	float att = 1;
	float ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = at + att;
		att = at;
		at = ahh;
		i = i + 1;
	}
	cout << ahh;
	return 0;
}