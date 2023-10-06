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
	cout << "Cac uoc so le la: ";
	while (i < n)
	{
		if (n % i == 0)
		{
			S = S + i;
		}
		i = i + 1;
	}
	cout << "Tich cac uoc so le la: " << S;
	return 0;
}