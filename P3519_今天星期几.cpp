#include <iostream>

using namespace std;

int main()
{
    int y, m, d, c, w;
    cin >> y >> m >> d;
    if (m == 1)
    {
        m = 13;
        y -= 1;
    }
    else if (m == 2)
    {
        m = 14;
        y -= 1;
    }
    c = y / 100;
    y = y % 100;
    w = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
    w = w % 7;
    switch(w)
    {
        case 1:cout << "Mon."; break;
        case 2:cout << "Tue."; break;
        case 3:cout << "Wed."; break;
        case 4:cout << "Thu."; break;
        case 5:cout << "Fri."; break;
        case 6:cout << "Sat."; break;
        case 0:cout << "Sun."; break;
    }
    return 0;
}