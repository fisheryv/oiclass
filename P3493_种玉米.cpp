#include <iostream>

using namespace std;

int main()
{
    int n, m, num, max = -1, min = 99999;
    cin >> n >> m;
    int s = n * m;
    for (int i = 1; i <= s; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }
    cout << max - min;
    return 0;
}