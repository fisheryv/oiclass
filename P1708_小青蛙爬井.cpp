#include <iostream>

using namespace std;

int main()
{
    int a, b, h, now = 0, days = 0;
    cin >> a >> b >> h;
    if (a <= b)
    {
        return -1;
    }
    while (true)
    {
        days++;
        now += a;
        if (now >= h)
        {
            break;
        }
        now -= b;
    }
    cout << days;
}