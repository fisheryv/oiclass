#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, m;
    double res = 0;
    cin >> n >> m;
    if (m >= 3)
    {
        res += m / 3;
    }
    if (n == 0)
    {
        cout << fixed << setprecision(1) << res;
        return 0;
    }
    if (n <= 2)
    {
        res += 6;
    }
    else if (n > 2 && n < 10)
    {
        res += 6 + (n - 2) * 1.8;
    }
    else
    {
        res += 20.4 + (n - 10) * 2.7;
    }
    cout << fixed << setprecision(1) << res;
    return 0;
}