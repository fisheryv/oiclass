#include <iostream>

using namespace std;

int main()
{
    long long a, b, res;
    cin >> a >> b;
    res = a * b * (b + 1) / 2;
    cout << res;
    return 0;
}