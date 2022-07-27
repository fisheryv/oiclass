#include <iostream>

using namespace std;

int main()
{
    int n, num, sum = 0, average, teacher;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        sum += num;
    }
    average = sum / n;
    teacher = sum % n;
    if (teacher < average)
    {
        teacher += n;
        average--;
    }
    cout << average << endl << teacher;
}