//http://www.spoj.com/problems/HCOUPLE/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
		int j;
		int totalvalue = 0;
		string name;
		cin >> name;
		int len = name.length();
		for(j=0;j<len;j++)
		{
			totalvalue = totalvalue + int(name[j]);
		}
		if(totalvalue%3==0)
			cout << "Case "<<i+1<<": Yes";
		else
			cout << "Case "<<i+1<<": No";
		cout << endl;
	}
	return 0;
}