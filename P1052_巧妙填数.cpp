#include <iostream>
#include <cstring>

using namespace std;

bool s[10];
int main()
{
    int a, b, c, x, y, z;
    for (int i = 123; i < 334; i++)
    {
        bool can_output = true;
        a = i;
        b = 2 * i;
        c = 3 * i;
        memset(s, false, sizeof(s));
        x = a / 100;
        y = a / 10 % 10;
        z = a % 10;
        s[x] = s[y] = s[z] = true;
        x = b / 100;
        y = b / 10 % 10;
        z = b % 10;
        s[x] = s[y] = s[z] = true;
        x = c / 100;
        y = c / 10 % 10;
        z = c % 10;
        s[x] = s[y] = s[z] = true;
        for (int j = 1; j < 10; j++)
        {
            if (!s[j])
            {
                can_output = false;
                break;
            }
        }
        if (can_output)
        {
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}