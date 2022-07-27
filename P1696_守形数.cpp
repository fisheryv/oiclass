#include <iostream>

using namespace std;

int main()
{
    int n, k = 10, i = 5;
    cin >> n;
    while (i <= n)
    {
        if (i * i % k == i)
        {
            cout << i << ' ';
        }
        if (i % 10 == 1)
        {
            i += 4;
            int a = i;
            k = 1;
            while (a != 0)
            {
                a /= 10;
                k *= 10;
            }
        }
        else if (i % 10 == 5)
        {
            i++;
        }
        else if (i % 10 == 6)
        {
            i += 5;
        }
    }
    return 0;
}