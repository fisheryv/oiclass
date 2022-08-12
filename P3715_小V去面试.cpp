#include <iostream>

using namespace std;

int main()
{
    int n;
    double res = 0;
    cin >> n;
    if (n < 3)
    {
        res += 10;
    }
    else if (n < 7)
    {
        res += 10 + (n - 3) * 1.5;
    }
    else
    {
        res += 16 + (n - 7) * 2.4;
    }
    cout << res;
    return 0;
}