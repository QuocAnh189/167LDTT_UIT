#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	float x;
	cout << "Enter x: ";
	cin >> x;
	float S = 0;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = sqrt(T + S);
		i = i + 1;
	}
	cout << "Result is " << S;
	return 0;
}