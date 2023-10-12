#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * (1 + (float)1 / (i * i));
		i = i + 1;
	}
	cout << "Sum is " << T;
	return 0;
}