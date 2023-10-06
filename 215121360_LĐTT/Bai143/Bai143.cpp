#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int i = 1;
	int S = 0;
	while (i < n)
	{
		if (n % i == 0)
		{
			S = S + i;
		}
		i = i + 1;
	}
	if (S == t)
	{
		cout << "La so hoan thien";
	}
	else
	{
		cout << "Khong la so hoan thien";
	}
	return 0;