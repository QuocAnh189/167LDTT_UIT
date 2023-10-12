#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	int t = n;
	int count = 0;
	while (t != 0)
	{
		count = count + 1;
		t = t / 10;
	}
	cout << "The number of digit is " << count;
	return 0;
}