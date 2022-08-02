#include <iostream>

using namespace std;

int main()
{
    int n, s, count = 0;
    cin >> n >> s;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (b[i] > b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[i] <= s)
        {
            s += a[i];
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count;
    return 0;
}