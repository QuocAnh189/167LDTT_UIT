#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2;
	float ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		at = ahh;
		i = i + 1;
	}
	cout << ahh;
	return 0;
}