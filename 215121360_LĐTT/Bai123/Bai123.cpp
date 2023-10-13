#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	float at = 2;
	float bt = 1;
	float ahh, bhh;
	int i = 2;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
		i = i + 1;
	}
	cout << "Result is " << ahh << " " << bhh;
	return 0;
}