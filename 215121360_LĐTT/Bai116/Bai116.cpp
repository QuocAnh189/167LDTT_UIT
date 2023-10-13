#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	float at = 2;
	float att = 1;
	float ahh;
	int i = 1;
	while (i <= n)
	{
		ahh = 4 * at + at;
		att = at;
		at = ahh;
		i = i + 1;
	}
	cout << "Result is " << ahh;
	return 0;
}