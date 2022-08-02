#include <iostream>

using namespace std;

bool a[1001];
int main()
{
    int n, m, i = 0, x = 0;
    cin >> n >> m;
    int total = n;
    while (total > 0)
    {
        i++;
        if (i > n)
        {
            i = 1;
        }
        if (!a[i])
        {
            x++;
            if (x == m)
            {
                a[i] = true;
                total--;
                x = 0;
            }
        }
    }
    cout << i;
}