#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int n;
	cout << "Enter n: ";
	cin >> n;
	int a0 = 0;
	int a = 1;
	cout << a0 << " ";
	int i = 1;
	while (i <= n)
	{
		a = a * i;
		i = i + 1;
		cout << a;
	}
	return 0;
}