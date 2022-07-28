#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long a = n * m;
    while (n % m != 0)
    {
        int rem = n % m;
        n = m;
        m = rem;
    }
    cout << a / m;
    return 0;
}