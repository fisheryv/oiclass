#include <iostream>

using namespace std;

int main()
{
    long long n, count4 = 0, count7 = 0;
    cin >> n;
    long long m = n;
    while (m % 4 == 0)
    {
        m /= 4;
        count4++;
    }
    while (m % 7 == 0)
    {
        m /= 7;
        count7++;
    }
    cout << count4 << " " << count7;
    return 0;
}