#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int n, m, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}