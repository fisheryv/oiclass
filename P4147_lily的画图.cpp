#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << 1 << endl;
		return 0;
	}
	int num = 4*n-4;
	char chars[num];
	int c = 1;
	for (int i = 0; i < num;)
	{
		string s = to_string(c);
		int len = s.length();
		const char *p = s.c_str();
		for(int j = 0; j<len && i<num; j++)
		{
			chars[i] = p[j];
			i++;
		}
		c++;
	}
	
	for (int i = 1; i < n; i++)
	{
		int space = n-i; // 前面空格数量
		for (int j = 0; j < space; j++)
		{
			cout << '.';
		}
		cout << chars[i-1];
		space = 2*i-1-2;
		for (int j = 0; j < space; j++)
		{
			cout << '.';
		}
		if (space > 0)
			cout << chars[num-i+1];
		cout << endl;
	}
	for(int j = 0; j<2*n-1; j++)
	{
		cout << chars[n-1+j];
	}
    return 0;
}