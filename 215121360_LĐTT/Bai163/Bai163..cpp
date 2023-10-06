#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	if (t % 2 == 0)
	{
		t = t / 2;
	}
	cout << "Uoc so le lon nhat la: " << t;
	return 0;
}