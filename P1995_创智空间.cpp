#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n % 2 != 0)
	{
		cout << "0 0" ;
		return 0;
	}
	if(n % 4 == 2)
	{
		cout << (n - 2) / 4 + 1 << " " << n / 2; 
	}
	else
	{
		cout << n / 4 << " " << n / 2;
	}
	return 0;
}