#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		i = i + 1;
	}
	cout << "Sum is " << T;
	return 0;
}