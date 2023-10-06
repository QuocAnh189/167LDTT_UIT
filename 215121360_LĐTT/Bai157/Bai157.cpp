#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a = 0;
	int i = 1;
	while (i <= n)
	{
		a = a * (float)1 / i;
		i = i + 1;
		cout << a << " ";
	}
	return 0;
}