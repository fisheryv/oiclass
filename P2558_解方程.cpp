#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, count = 0;
    cin >> n;
    int m = ceil(sqrt(n));
    for (long long x = 0; x <= m; x++)
    {
        long long d = n - x * x;
        long long y = sqrt(d);
        if (x * x + y * y == n && y * y == d)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}