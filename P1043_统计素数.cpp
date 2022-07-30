#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
    if (n == 2)
    {
        return true;
    }
    else if (n == 1 || n == 0)
    {
        return false;
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
    int l, r, count = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (is_prime(i))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}