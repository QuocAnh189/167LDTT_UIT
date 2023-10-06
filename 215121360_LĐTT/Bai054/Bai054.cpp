#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int i = 2;
	cout << "Cac uoc so chan la: ";
	while (i <= n)
	{
		if (n % i == 0)
		{
			cout << i << " ";
		}
		i = i + 2;
	}
	return 0;
}