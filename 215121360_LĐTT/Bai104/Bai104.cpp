#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float S = 0;
	float e = 1 / 2;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 1 / (i * (i + 1));
		S = S + e;
		i = i + 1;
	}
	cout << "Result is " << S;
	return 0;
}