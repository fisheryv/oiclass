#include <iostream>

using namespace std;

int main()
{
    int l, r, count = 0;
    cin >> l >> r;
    for (int a = l; a <= r; a++)
    {
        int i = a;
        while (i > 0)
        {
            int num = i % 10;
            if (num == 2)
            {
                count++;
            }
            i /= 10;
        }
    }
    cout << count << endl;
    return 0;
}