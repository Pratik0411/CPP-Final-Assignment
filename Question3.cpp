#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

string change(string b,int i1,int i2)
{
	string temp;
	temp[0]=b[i1];
	b[i1]=b[i2];
	b[i2]=temp[0];
	return b;
}

int calc(string c)
{
	int len;
	int cnt=0;
	len=c.length();
	for(int i=1;i<len;i++)
	{
		if(c[i-1]=='0' && c[i]=='1')
		{
			cnt=cnt+1;
		}
	}
	return cnt;
}

int calculate(int a[],int len)
{
	int m=0;
	for(int i=0;i<len;i++)
	{
		if(a[i]>m)
		{
			m = a[i];
		}
	}
	return m;
}
int main()
{
	string b, c;
	int len, i1, i2, count = 0, cnt = 0;
	cout << "Enter Binary String\n";
	cin >> b;
	len = b.length();
	int result[300];
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j=j+2)
		{
			c = change(b, i, j);
			result[cnt] = calc(c); 
			cnt++;
		}
	}
	cout<<"Answer: "<< calculate(result, cnt) << endl;
	return 0;
}
