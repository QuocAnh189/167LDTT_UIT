#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + (float)i / (i + 1);
		i = i + 1;
	}
	cout << "Tong la: " << S;
	return 1;

}