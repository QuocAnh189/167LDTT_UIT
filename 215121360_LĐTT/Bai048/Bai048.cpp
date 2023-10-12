#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int x;
	cout << "Enter x: ";
	cin >> x;

	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * (x * (x + i));
		i = i + 1;
	}
	cout << "Sum is " << T;
	return 0;
}