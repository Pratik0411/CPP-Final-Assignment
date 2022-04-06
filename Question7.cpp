#include<iostream>
using namespace std;

int hcf(int l, int b)
{
	if(l==0 || b==0)
	{
		return 0;
	}
	if(l==b)
	{
		return l;
	}
	if(l>b)
	{
		return hcf(l-b, b);
	}
	return hcf(l, b-l);
}

int main()
{
	int l, b, min, res;
	cout << "Enter Length\n";
	cin >> l;
	cout << "Enter Breadth\n";
	cin >> b;
	min = hcf(l, b);
	res = (l/min) * (b/min);
	cout << "Answer: "<< res <<endl;

	return 0;
}
