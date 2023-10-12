#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float n;
	cout << "Enter n: ";
	cin >> n;
	float x;
	cout << "Enter x: ";
	cin >> x;

	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
	}
	cout << "Sum is " << T;
	return 0;
}