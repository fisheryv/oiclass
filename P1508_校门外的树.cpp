#include <iostream>

using namespace std;

bool a[10001];
int main()
{
    int l, m, count = 0, n1, n2;
    cin >> l >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> n1 >> n2;
        for (int j = n1; j <= n2; j++)
        {
            a[j] = true;
        }
    }
    for (int i = 0; i <= l; i++)
    {
        if (!a[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}