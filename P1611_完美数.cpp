#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n, s;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        s = 1;
        int num = floor(sqrt(i));
        for (int j = 2; j <= num; j++)
        {
            if (i % j == 0)
            {
                s += j;
                if (j != i/j)
                    s += i/j;
            }
        }
        if (s == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}