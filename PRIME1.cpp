#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,m,n,sqroot,num,k,rem,flag;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m;
		cin>>n;
		for(num=m;num<=n;num++)
		{
			flag=0;
			sqroot=sqrt(num);
			for(k=2;k<=sqroot;k++)
			{
				if(num%k==0)
				{	
					flag=1;
					break;
				}
			}
			if(flag==0 && num!=1)
			cout<<num<<endl;
		}

	}
	return 0;
}