#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i <= ceil(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << n << "=";
    while (true)
    {
        for (int i = 2; i <= n; i++)
        {
            if (!is_prime(i))
            {
                continue;
            }
            if (n % i == 0)
            {
                n /= i;
                cout << i;
                if (n > 1)
                    cout << "*";
                i = 1;
            }
        }
        if (n == 1)
        {
            break;
        }
    }
    return 0;
}