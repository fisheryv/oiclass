#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    
    b[n / 2] = a[0];
    for (int i = 1; i < n; i++)
    {
        
            if (c <= 0)
            {
                c = -c + 1;
            }
            else
            {
                c = -c;
            }
            b[n / 2 + c] = a[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}