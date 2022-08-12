#include <iostream>

using namespace std;

int main()
{
    long long x, y, z, res1, res2;
    cin >> x >> y >> z;
    res1 = x - y;
    res2 = x * z - res1 * 18;
    cout << res1 << " " << res2;
    return 0;
}