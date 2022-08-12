#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, m;
    double res = 6;
    cin >> n >> m;
    if (m > 5)
    {
        res += m / 5;
    }
    if (n > 2.5)
    {
        res += (n - 2.5) * 1.2;
    }
    cout << fixed << setprecision(1) << res;
    return 0;
}