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
	float s = (float)(n * r * r * sin(2 * 3.14 / n)) / 2;
	cout << "Dien tich da giac deu la: " << s;
	return 0;
}