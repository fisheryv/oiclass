#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[47];
    cin >> n;
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n-1];
}