#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num, max = -1, min = 121, sum = 0;
    double ave;
    for (int i = 1; i <= 5; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
        sum += num;
    }
    ave = sum / 5.0;
    cout << "MAX:" << max << endl << "MIN:" << min << endl << "SUM:" << sum << endl << "AVE:" << fixed << setprecision(1) << ave;
    return 0;
}