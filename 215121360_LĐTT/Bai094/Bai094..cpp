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
		S = sqrt(i + S);
		i = i + 1;
	}
	cout << "Result is " << S;
	return 0;
}