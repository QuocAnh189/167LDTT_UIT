#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	cout << "Nhap xA: ";
	cin >> xA;
	cout << "Nhap yA: ";
	cin >> yA;
	cout << "Nhap xB: ";
	cin >> xB;
	cout << "Nhap yB: ";
	cin >> yB;
	cout << "Nhap xC: ";
	cin >> xC;
	cout << "Nhap yC: ";
	cin >> yC;
	cout << "Nhap xM: ";
	cin >> xM;
	cout << "Nhap yM: ";
	cin >> yM;
	float S1 = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC) / 2;
	float S2 = abs(xM * yA + xA * yB + xB * yM - xA * yM - xB * yA - xM * yB) / 2;
	float S3 = abs(xM * yB + xB * yA + xA * yM - xB * yM - xA * yC - xM * yC) / 2;
	float S4 = abs(xM * yC + xB * yA + xA * yM - xB * yM - xM * yC - xM * yC) / 2;
	if (S1 == S2 + S3 + S4)
	{
		cout << "This is the triangle";
	}
	else
	{
		cout << "This is not the triangle";
	}
	return 0;
}