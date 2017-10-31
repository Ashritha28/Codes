#include <bits/stdc++.h>
using namespace std;

int squaresum(int num)
{
	int sum=0;
	while(num>0)
	{
		sum = sum + num*num;
		num--; 
	}
	return sum;
}


int main()
{
	int n;
	while(1)
	{
		cin >> n;
		if(n==0)
			break;
		else
			cout << squaresum(n) << endl;
	}
	return 0;
}