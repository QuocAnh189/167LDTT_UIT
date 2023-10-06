#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = 0;
	int i = n;
	while (i >= 1)
	{
		S = sqrt(i + S);
		i = i + 1;
	}
	cout << S;
	return 0;
}