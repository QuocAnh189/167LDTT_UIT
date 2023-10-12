#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float n;
	cout << "Enter n: ";
	cin >> n;

	int S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + i * i * i;
		i = i + 1;
	}
	cout << "Sum is " << S;
	return 0;
}