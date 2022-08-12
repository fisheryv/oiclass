#include <iostream>

using namespace std;

int main()
{
    int m, walk, bike;
    cin >> m;
    walk = m / 1.2;
    bike = m / 3.0 + 50;
    if (walk > bike)
    {
        cout << "Bike" << endl;
        cout << bike;
    }
    else if (bike > walk)
    {
        cout << "Walk" << endl;
        cout << walk;
    }
    else
    {
        cout << "All" << endl;
        cout << bike;
    }
    return 0;
}