#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    unsigned long long res = 1;
    while (k > 0)
    {
        if (k % 2 == 1)
        {
            res = res * n % 100;
        }
        k /= 2;
        n = n * n % 100;
    }
    cout << res / 10 << ' ' << res % 10;
    return 0;
}