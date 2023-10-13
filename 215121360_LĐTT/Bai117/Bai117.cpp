#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	float at = 3;
	float att = -1;
	float p = 2;
	float ahh;
	int i = 2;
	while (i <= n)
	{
		p = p * 2;
		ahh = 5 * p + 5 * at - att;
		at = ahh;
		att = at;
		i = i + 1;
	}
	cout << "Result is " << ahh;
	return 0;
}