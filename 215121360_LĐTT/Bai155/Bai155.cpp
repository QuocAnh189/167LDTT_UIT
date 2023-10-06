#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 0;
	int a = 2;
	while (i <= n)
	{
		a = 2 * pow(2, i);
		i = i + 1;
		cout << a << " ";
	}
	return 0;
}