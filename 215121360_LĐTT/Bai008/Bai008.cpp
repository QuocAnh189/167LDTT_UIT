#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap canh cua da  giac deu: ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh duong tron ngoai tiep da giac: ";
	cin >> r;
	float p = 2 * n * r * sin(3.14 / n);
	cout << "Chu Vi da giac deu la: " << p;
	return 0;
}