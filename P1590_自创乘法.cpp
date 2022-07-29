#include <iostream>

using namespace std;

int main()
{
    int a, b, res = 0, n, m;
    cin >> a >> b;
    int num = b;
    while (a > 0)
    {
        b = num;
        n = a % 10;
        while (b > 0)
        {
            m = b % 10;
            res += n * m;
            b /= 10;
        }
        a /= 10;
    }
    cout << res;
    return 0;
}