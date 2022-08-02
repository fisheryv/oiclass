#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool b[3001];
int a[3001];
int main()
{
    int n;
    bool yes = true;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        memset(b, false, sizeof(b));
        for (int i = 2; i <= n; i++)
        {
            int difference = abs(a[i] - a[i - 1]);
            if (difference < n)
            {
                b[difference] = true;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (!b[i])
            {
                yes = false;
            }
        }
        if (yes)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}