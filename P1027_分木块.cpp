#include <iostream>

using namespace std;

int main()
{
    int n, num, count100 = 0, count10 = 0, count1 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        count100 += num / 100;
        count10 += num % 100 / 10;
        count1 += num % 10;
    }
    cout << count100 << endl << count10 << endl << count1;
}