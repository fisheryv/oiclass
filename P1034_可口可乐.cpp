#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int drink = n;
    int empty = n;
    while (empty >= 3)
    {
        int p = empty / 3;
        int q = empty % 3;
        drink += p;
        empty = p + q;
    }
    cout << drink;
    return 0;
}