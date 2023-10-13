#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a;
	cout << "Enter a: ";
	cin >> a;
	float b;
	cout << "Enter b: ";
	cin >> b;
	float c;
	cout << "Enter c: ";
	cin >> c;
	float d = b * b - 4 * a * c;
	if (d != 0)
	{
		if (d > 0)
		{
			float x1 = -b + sqrt(d) / (2 * a);
			float x2 = -b + sqrt(d) / (2 * a);
		}
		else
			cout << "VN";
	}
	else
	{
		float x = -b / (2 * a);
		cout << x;
	}
	return 0;
}