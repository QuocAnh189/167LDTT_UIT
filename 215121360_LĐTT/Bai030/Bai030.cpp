#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	float S = 0;
	int i = 2;
	while (i <= 2 * n)
	{
		S = S + (float)1 / i;
		i = i + 2;
	}
	cout << "Sum is " << S;
	return 1;
}