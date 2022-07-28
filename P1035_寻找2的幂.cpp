#include <iostream>

using namespace std;

int main()
{
    long long n, num = 1;
    cin >> n;
    while (true)
    {
        if ((n >= num && n < num * 2) || (n == num))
        {
            break;
        }
        num *= 2;
    }
    if (num * 2 - n < n - num)
    {
        cout << num * 2;
    }
    else
    {
        cout << num;
    }
    return 0;
}