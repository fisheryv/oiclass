#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double s;
    cin >> s;
    cout << fixed << setprecision(2) << sqrt(s / 3.14);
    return 0;
}