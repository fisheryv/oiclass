#include <iostream>

using namespace std;

int main()
{
    long long a, n, cake;
    cin >> a >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> cake;
        if (a == cake)
        {
            a *= 2;
        }
    }
    cout << a;
    return 0;
}