
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	float S = 0;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = S + T * i;
		;
		i = i + 1;
	}
	cout << "Sum is " << S;
	return 0;
}