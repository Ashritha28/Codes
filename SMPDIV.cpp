//http://www.spoj.com/problems/SMPDIV/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
		int n,x,y,j;
		cin >> n >> x >> y;
		if(x<y)
		{
			for(j=x;j<n;j++)
			{
				if(j%x==0 && j%y!=0)
					cout << j << " ";
				
			}
			cout << endl;
		}
		else 
		{
			for(j=y;j<n;j++)
			{
				if(j%x==0 && j%y!=0)
					cout << j << " ";
			}
			cout << endl;	
		}
	}
	return 0;
}