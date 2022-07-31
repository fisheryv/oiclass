#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    int c = 1;
    int a, b;
    vector<int> res;
    while (n != 1)
    {
        int k = c * 2;
        a = n / k;
        b = n % k;
        if (b < 0)
        {
            b = -b;
            a -= c;
        }
        res.insert(res.begin(), b);
        c = -c;
        n = a * c;
    }
    res.insert(res.begin(), n);
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
    return 0;
}