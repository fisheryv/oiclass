#include <iostream>

using namespace std;

int main()
{
	int j = 0, m = 0, spend;
	for (int i = 1; i <= 12; i++)
	{
		j += 300;
		cin >> spend;
		j -= spend;
		if (j < 0)
		{
			j = -i;
			cout << j;
			return 0;
		}
		m += j / 100 * 100;
		j -= j / 100 * 100;
	}
	cout << m * 1.2 + j;
	return 0;
}