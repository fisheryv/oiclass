#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double m;
    cin >> m;
    if (m < 100)
    {
        m *= 0.9;
    }
    else
    {
        m = 90 + (m - 100) * 0.6;
    }
    cout << fixed << setprecision(2) << m;
    return 0;
}