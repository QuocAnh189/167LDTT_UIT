#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int S = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			S = S + i;
		}
		i = i + 1;
	}
	cout << "Tong cac uoc so la: " << S;
	return 0;
}