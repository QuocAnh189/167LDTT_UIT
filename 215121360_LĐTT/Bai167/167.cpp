#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int S = 0;
	int i = 0;
	while (S < n)
	{
		i = i + 1;
		S = S + i;
	}
	cout << i - 1;
	return 0;
}