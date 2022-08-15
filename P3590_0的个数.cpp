#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, count2 = 0, count5 = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        c = i;
        if (c % 2 == 0)
        {
            while (c % 2 == 0)
            {
                c /= 2;
                count2++;
            }
        }
        if (c % 5 == 0)
        {
            while (c % 5 == 0)
            {
                c /= 5;
                count5++;
            }
        }
    }
    if (count2 > count5)
    {
        cout << count5;
    }
    else
    {
        cout << count2;
    }
    return 0;
}