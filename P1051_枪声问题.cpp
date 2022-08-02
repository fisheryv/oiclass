#include <iostream>

using namespace std;

bool a[2001];
int main()
{
    a[1] = true;
    int s, t1, t2, n1 = 1, n2 = 1, count = 0;
    cin >> s >> t1 >> t2;
    for (int i = 2; i <= s; i++)
    {
        n1 = n1 + t1 + 1;
        n2 = n2 + t2 + 1;
        a[n1] = true;
        a[n2] = true;
    }
    for (int i = 1; i <= max(n1, n2); i++)
    {
        if (a[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}