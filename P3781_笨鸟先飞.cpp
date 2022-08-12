#include <iostream>

using namespace std;

int main()
{
    long long n, m = 1, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += m;
        m += 2;
    }
    cout << sum;
    return 0;
}