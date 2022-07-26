#include <iostream>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    if (k == m)
    {
        k = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % m == k)
        {
            cout << i << " ";
        }
    }
    return 0;
}