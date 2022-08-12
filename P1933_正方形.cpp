#include <iostream>

using namespace std;

int main()
{
    int n;
    long long res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num = n - (i - 1);
        res += num * num; 
    }
    cout << res;
    return 0;
}