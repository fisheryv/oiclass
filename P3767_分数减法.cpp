#include <iostream>

using namespace std;
 
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long n = a * d - b * c, m = b * d;
    long long x = n, y = m;
    while (n % m != 0)
    {
        int rem = n % m;
        n = m;
        m = rem;
    }
    cout << x / m << " " << y / m;
    return 0;
}