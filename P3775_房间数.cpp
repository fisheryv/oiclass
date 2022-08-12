#include <iostream>

using namespace std;

int main()
{
    int n, res;
    cin >> n;
    res = n / 3;
    if (n % 3 != 0)
    {
        res++;
    }
    cout << res;
    return 0;
}