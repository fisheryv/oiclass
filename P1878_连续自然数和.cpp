#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int lower = 1; lower < m; lower++)
    {
        long t = lower;
        for (int upper = lower+1; upper < m; upper++)
        {
            t += upper;
            if (t == m)
            {
                cout << lower << " " << upper << endl;
                break;
            }
            else if (t > m)
            {
                break;
            }
        }
    }
}