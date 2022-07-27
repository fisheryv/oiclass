#include <iostream>

using namespace std;

int main()
{
    int n, level = 0, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        level += i;
        sum += level;
    }
    cout << sum;
    return 0;
}