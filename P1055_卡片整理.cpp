#include <iostream>

using namespace std;

int a[10001];
int main()
{
    int n, num;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        a[num]++;
    }
    for (int i = 0; i < 10001; i++)
    {
        if (a[i])
        {
            cout << i << " " << a[i] << endl;
        }
    }
    return 0;
}