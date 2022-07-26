#include <iostream>

using namespace std;

int main()
{
    int y, m, days;
    cin >> y >> m;
    switch(m)
    {
        case 1: 
        case 3: 
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4: 
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            {
                days = 29;
            }
            else
            {
                days = 28;
            }
            break;
    }
    cout << days;
    return 0;
}