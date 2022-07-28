#include <iostream>

using namespace std;

int main()
{
    long long a, b, m = 10;
    cin >> a >> b;
    while (true)
    {
        if (a / m + a % m == b || a / m == 0)
        {
            break;
        }
        m *= 10;
    }
    if (a / m == 0)
    {
        cout << "Impossible!";
    }
    else
    {
        cout << a / m << "+" << a % m << "=" << b;
    }
    return 0;
}