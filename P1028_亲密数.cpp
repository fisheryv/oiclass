#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long previous = 1000000000000000, now, res1, res2, difference = 999999999999999;
    for (int i = 1; i <= n; i++)
    {
        cin >> now;
        if (abs(previous - now) < difference)
        {
            difference = abs(previous - now);
            res1 = previous;
            res2 = now;
        }
        previous = now;
    }
    cout << res1 << " " << res2;
    return 0;
}