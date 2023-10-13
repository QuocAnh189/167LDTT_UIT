#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int at = n;
	int ahh;
	int i = 2;
	while (i <= n)
	{
		if (at % 2 == 0)
		{
			ahh = at / 2;
		}
		else
		{
			ahh = 3 * at + 1;
		}
		cout << ahh << " ";
		at = ahh;
		i = i + 1;
	}
	return 0;
}