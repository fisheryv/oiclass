#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    while (n % m != 0)
    {
        int rem = n % m;
        n = m;
        m = rem;
    }
    cout << m;
    return 0;
}