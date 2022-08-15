#include <iostream>

using namespace std;

int main()
{
    int n, num, s, a, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = 0;
        cin >> num;
        while (num > 0)
        {
            a = num % 10;
            s = s * 10 + a;
            num /= 10;
        }
        sum += s;
    }
    cout << sum;
    return 0;
}