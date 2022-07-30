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
    for (int i = 2; i <= n / 2; i++)
    {
        if (!is_prime(i))
        {
            continue;
        }
        if (is_prime(n - i))
        {
            cout << n << "=" << i << "+" << n - i << endl;
        }
    }
    return 0;
}