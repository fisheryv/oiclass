#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[20];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    for (int i = 3; i < n; i++)
    {
        a[i] = 2 * a[i - 1] - a[i - 3];
    }
    cout << a[n - 1];
    return 0;
}