#include <iostream>

using namespace std;

int main()
{
    int n, m, a, s;
    cin >> n >> m >> a;
    if(m % a == 0 && n % a == 0)
    {
        s = (m / a) * (n / a);
    }
    if(m % a != 0 && n % a != 0)
    {
        s = (m / a + 1) * (n / a + 1);
    }
    if(m % a != 0 && n % a == 0)
    {
        s = (m / a + 1) * (n / a);
    }
    if(m % a == 0 && n % a != 0)
    {
        s = (m / a) * (n / a + 1);
    }
    cout << s;
    return 0;
}