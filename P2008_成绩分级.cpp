#include <iostream>

using namespace std;

int main()
{
    double m;
    char grade;
    cin >> m;
    if (m <= 100 && m >= 90)
        grade = 'A';
    else if (m >= 80)
        grade = 'B'; 
    else if (m >= 70)
        grade = 'C';
    else if (m >= 60)
        grade = 'D';
    else
        grade = 'E';
    cout << grade;
    return 0;
}
