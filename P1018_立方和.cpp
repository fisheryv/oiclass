#include <iostream>

using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        res += i;
    }
    cout << res * res;
    return 0;
}