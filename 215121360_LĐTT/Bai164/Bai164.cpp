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
	if (i <= n)
	{
		S = S + (float)1 / (1 + S);
		i = i + 1;
	}
	cout << S;
	return 0;
}