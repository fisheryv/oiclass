#include <iostream>

using namespace std;

int main()
{
    int a, b, res;
    cin >> a >> b;
    if (a % 2 == 0 && b % 2 == 0)
    {
        res = (b - a) / 2 + 1;
    }
    if (a % 2 == 1 && b % 2 == 1)
    {
        res = (b - a) / 2 + 1;
    }
    if (a % 2 == 1 && b % 2 == 0)
    {
        res = (b - a + 1) / 2 + 1;
    }
    if (a % 2 == 0 && b % 2 == 1)
    {
        res = (b - a + 1) / 2;
    }
    cout << res;
    return 0;
}