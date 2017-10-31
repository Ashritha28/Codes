#include <bits/stdc++.h>
using namespace std;

int numfactors(int num)
{
	int sqroot = sqrt(num);
	int count=0;
	int i;
	for(i=1;i<=sqroot;i++)
	{
		if(num%i==0)
			count++;
	}
	return count;
}

int numrect(int num)
{
	int rect=0;
	if(num==1)
		return 1;
	else
		return (numrect(num-1) + numfactors(num));
}

int main()
{
	int n;
	cin >> n;
	cout << numrect(n) << endl;
	return 0;
}