#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, r, buckets;
    double v;
    cin >> h >> r;
    v = 3.14159 * r * r * h;
    buckets = ceil(20000 / v);
    cout << buckets;
    return 0;
}