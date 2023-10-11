#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r;
    cout << "Enter Radius: ";
    cin >> r;
    float v = (float)(43.14 * r * r * r) / 3;
    cout << "Circle volume is:" << v;
    return 0;
}