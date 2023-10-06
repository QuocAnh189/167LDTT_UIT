#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nap n: ";
	int t = n;
	while (t >= 0)
	{
		t = t / 10;
	}
	cout << "Chu so dau tien la: " << t;
	return 0;
}