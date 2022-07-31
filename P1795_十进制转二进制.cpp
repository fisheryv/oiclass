#include <iostream>

using namespace std;

int main()
{
    int n, i = 0;
    int a[20];
    cin >> n;
    while (n != 0)
    {
        a[++i] = n % 2;
        n /= 2;
    }
    for (int j = i; j > 0; j--)
    {
        cout << a[j];
    }
    return 0;
}