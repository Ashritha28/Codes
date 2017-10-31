//http://www.spoj.com/problems/FASHION/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
		int n,j;
		cin >> n;
		long int sum=0;
		vector<int> hotmen(n);
		vector<int> hotwomen(n);
		for(j=0;j<n;j++)
		{
			cin >> hotmen[j];
		}
		for(j=0;j<n;j++)
		{
			cin >> hotwomen[j];
		}
		sort(hotmen.begin(),hotmen.end());
		sort(hotwomen.begin(),hotwomen.end());
		for(j=0;j<n;j++)
		{
			sum = sum + hotmen[j]*hotwomen[j];
		}
		cout << sum << endl;
	}
	return 0;
}