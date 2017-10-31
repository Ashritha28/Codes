//http://www.spoj.com/problems/STRHH/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
		string str;
		cin >> str;
		int k = str.length()/2;
		int j;
		for(j=0;j<k;j=j+2)
		{
			cout<<str[j];
		}
		cout<<endl;
	}
	return 0;
}