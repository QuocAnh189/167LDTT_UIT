#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	int t = n;
	while (t >= 0)
	{
		t = t / 10;
	}
	cout << "The first digit is " << t;
	return 0;
}