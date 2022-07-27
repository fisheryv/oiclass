#include <iostream>

using namespace std;

int main()
{
    int m, res = 1;
    cin >> m;
    for (int i = 1; i < m; i++)
    {
        res = (res + 1) * 2;
    }
    cout << res;
    return 0;
}