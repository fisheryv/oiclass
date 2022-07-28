#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int res = n;
    while (res != 153)
    {
        n = res;
        res = 0;
        while (n > 0)
        {
            int a = n % 10;
            res += a * a * a;
            n /= 10;
        }
        count++;
    }
    cout << count;
    return 0;
}