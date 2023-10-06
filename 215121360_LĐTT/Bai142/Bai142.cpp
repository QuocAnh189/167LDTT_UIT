#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nap n: ";
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	cout << "So dao nguoc la: " << dn;
	return 0;
}