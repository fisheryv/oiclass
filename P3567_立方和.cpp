#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, num, count = 0;
	cin >> n;
    for (int i = 1; i < 1001; i++)
	{
		a = n % 10;
		b = n / 10 % 10;
		c = n / 100 % 10;
		num = a * a * a + b * b * b + c * c * c;
		if (n == num)
		{
			count++;
		}
		n = num;	 
	}
	if (count == 0)
	{
		cout << "error";
	}
    else
    {
		cout << num;
	}
    return 0;
}