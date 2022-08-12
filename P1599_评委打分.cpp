#include <iostream>

using namespace std;

int main()
{
    int max = -1, min = 101, num, sum = 0, avg;
    for (int i = 1; i < 13; i++)
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
    sum = sum - max - min;
    avg = sum / 10;
    cout << avg;
    return 0;
}