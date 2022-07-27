#include <iostream>

using namespace std;

int main()
{
    int n, num, pcount = 0, ncount = 0, psum = 0, nsum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (num < 0)
        {
            ncount++;
            nsum += num;
        }
        else
        {
            pcount++;
            psum += num;
        }
    }
    cout << pcount << " " << psum << endl;
    cout << ncount << " " << nsum;
    return 0;
}