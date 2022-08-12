#include <iostream>

using namespace std;

int main()
{
    int n, num, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << sum;
    return 0;
}