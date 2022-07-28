#include <iostream>

using namespace std;

int main()
{
    int n, res;
    cin >> n;
    res = 27 - n;
    if (res <= 0)
    {
        res = 30 + res;
    }
    cout << res;
    return 0;
}