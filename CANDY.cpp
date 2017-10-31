#include <bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n,i,d,toadd=0;
		long long int sum=0;
		cin >> n;
		if(n==-1)
			break;
		else
		{
			vector<int> arr(n);
			for(i=0;i<n;i++)
			{
				cin >> arr[i];
				sum = sum + arr[i];
			}
			if(sum%n!=0)
				cout << "-1" << endl;
			else
			{
				d = sum/n;
				for(i=0;i<n;i++)
				{
					if(arr[i]>d)
						toadd = toadd + (arr[i]-d);
				}
				cout << toadd << endl;
			}
		}
	}
	return 0;
}