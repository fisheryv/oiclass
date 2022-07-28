#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double x, money;
    cin >> x;
    money = 2 * x;
    if (x > 40)
    {
        money += (x - 40) * 0.4; 
    }
    printf("%.2lf", money);
    return 0;
}