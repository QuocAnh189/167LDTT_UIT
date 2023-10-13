#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int t = n;
	if (t % 2 == 0)
	{
		t = t / 2;
	}
	cout << "The greatest odd divisor is " << t;
	return 0;
}