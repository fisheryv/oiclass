#include <iostream>

using namespace std;

int main()
{
    long long a;
    int count = 0;
    cin >> a;
    if (a % 10 == 5)
    {
        int rem;
        while (true)
        {
            rem = a % 5;
            if (rem != 0)
            {
                break;
            }
            a /= 5;
            count++;
        }
    }
    else
    {
        while (a > 0)
        {
            int num = a % 10;
            if (num == 0)
            {
                count++;
            }
            a /= 10;
        }
    }
    cout << count;
    return 0;
}