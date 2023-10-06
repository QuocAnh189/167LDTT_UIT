#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	long S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + i;
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 1;

}