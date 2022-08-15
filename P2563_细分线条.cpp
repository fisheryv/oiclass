#include <iostream>

using namespace std;

int main()
{
	int n, num1, num2, t;
	cin >> n >> num1;
	if (n == 1)
	{
		cout << num1;
		return 0;
	}
	for (int i = 1; i < n; i++)
	{
		cin >> num2;
		while (true)
		{
			t = num2;
			num2 = num1 % num2;
			num1 = t;
			if (num2 == 0)
			{
				break;
			}
		}
	}
	cout << t;
	return 0;
}