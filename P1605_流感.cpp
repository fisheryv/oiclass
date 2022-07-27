#include <iostream>

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    long long infected = 1;
    for (int i = 1; i <= n; i++)
    {
        infected += infected * x;

    }
    cout << infected;
    return 0;
}