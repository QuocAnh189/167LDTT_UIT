#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x;
	cout << "Enter x: ";
	cin >> x;
	float y;
	cout << "Enter y: ";
	cin >> y;
	float z;
	cout << "Enter z: ";
	cin >> z;
	if (x <= y && y <= z)
	{
		cout << "BDT Right";
	}
	else
	{
		cout << "BDT Wrong";
	}
	return 0;
}