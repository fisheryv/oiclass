#include <iostream>

using namespace std;

int main()
{
    int n;
    long long now = 2;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        now *= 2;
    }
    cout << now;
    return 0;
}