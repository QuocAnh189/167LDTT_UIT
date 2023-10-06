#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int ht = (n / 100) % 10;
	cout << "Chu so hang don tram la: " << ht;
	return 0;
}