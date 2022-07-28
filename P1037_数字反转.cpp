#include <iostream>

using namespace std;

int main()
{
    long long n, num, s = 0;
    cin >> n;
    num = abs(n);
    if (n < 0)
    {
        cout << "-";
    }
    while (num > 0)
    {
        n = num % 10;
        s = 10 * s + n;
        num /= 10;
    }
    cout << s;
    return 0;
}