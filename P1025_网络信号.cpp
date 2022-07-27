#include <iostream>

using namespace std;

int main()
{
    int r, n, move, distance = 0, count = 0;
    cin >> r >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> move;
        distance += move;
        if (distance <= r && distance >= -r)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}