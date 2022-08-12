#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, count = 0, l = 1;
	cin >> h;
    while (abs(h - l) > abs(h - l * 2))
    {
        l *= 2;
        count++;
    }
    cout << count << endl << abs(h - l);
}