#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x;
	cout << "Enter year x: ";
	cin >> x;
	int y;
	cout << "Enter year y: ";
	cin >> y;
	int i = x;
	while (i <= y)
	{
		int a = (i % 400 == 0) ? 1 : 0;
		int b = ((i % 4 == 0 && i % 100 != 0)) ? 1 : 0;
		if (a == 1 || b == 1)
		{
			cout << i << " ";
		}
		i = i + 1;
	}
	return 0;
}