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
	int T = 1;
	while (i < n)
	{
		T = T * i;
		S = pow(T + S, 1 / (i + 1));
		i = i + 1;
	}
	cout << "Result is " << S;
	return 0;
}