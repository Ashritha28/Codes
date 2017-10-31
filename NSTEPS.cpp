#include <bits/stdc++.h>
using namespace std;

int calnum(int x,int y)
{
	if(x%2==0 && y%2==0)
	{
		if((x>y && (x-y)==2) || (x==y))
			return (x+y);
		else 
			return -1;
	}

	else if (x%2==1 && y%2==1)
	{
		if((x>y && (x-y)==2) || (x==y))
			return (x+y-1);
		else 
			return -1;
	}

	else
		return -1;
}

int main()
{
	int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
	
		long long int x,y;
		long long int output;
		cin >> x >> y;
		output = calnum(x,y);
		if(output == -1)
			cout << "No Number" << endl;
		else
			cout << output << endl;
	}
	
	return 0;
}