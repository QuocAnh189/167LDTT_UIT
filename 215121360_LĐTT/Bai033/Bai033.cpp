#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + (float)i / (i + 1);
		i = i + 1;
	}
	cout << "Sum is " << S;
	return 1;
}