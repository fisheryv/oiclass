#include <iostream>

using namespace std;

int a[1001], b[1001];
int main()
{
    int n, count = 0;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}