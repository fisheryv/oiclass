#include <iostream>

using namespace std;

int main()
{
    int n, sum = 1;
    cin >> n;
    if (n == 0)
    {
        sum = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        sum *= i;
    }
    cout << sum;
    return 0;
}