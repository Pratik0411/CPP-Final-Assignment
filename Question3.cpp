#include<iostream>
#include<string>
using namespace std;

string swap(string b, int i1, int i2)
{
	char temp;
	temp = b[i1];
	b[i1] = b[i2];
	b[i2] = temp;
	return b;
}

int calculate(string c)
{
	int len;
	int cnt = 0;
	len = c.length();
	for(int i=1; i < len; i++)
	{
		if(c[i-1] == '0' && c[i] == '1')
		{
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	string b, c;
	int i1, i2, count = 0;

	cout << "Enter Binary String\n";
	cin >> b;
	
	c = swap(b, 1, 3);
	cout << c << endl;
	count = calculate(c);
	cout << count << endl;
	
	return 0;
}
