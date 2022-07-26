#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d, money = 10;
    cin >> d;
    if (d > 2.5)
    {
        d -= 2.5;
        money += d * 2.6;
    }
    cout << round(money);
    return 0;
}