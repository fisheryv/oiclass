#include <iostream>

using namespace std;

int main()
{
    int m, n, res;
    cin >> m >> n;
    res = m / n;
    if (m % n != 0)
    {
        res++;
    }
    cout << res;
    return 0;
}