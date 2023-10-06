#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int T = 1;
	int i = 0;
	while (T < n)
	{
		T = T * 2;
		i = i + 1;
	}
	cout << i - 1;
	return 0;
}