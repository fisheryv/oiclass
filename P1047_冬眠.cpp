#include <iostream>

using namespace std;

int main()
{
    int d, n;
    cin >> d >> n;
    int a[n];
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int count = d / sum * n;
    d %= sum;
    int i = 0;
    while (d > 0)
    {
        d -= a[i];
        count++;
        i++;
    }
    cout << count;
    return 0;
}