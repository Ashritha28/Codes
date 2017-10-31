#include <bits/stdc++.h>
using namespace std;

int reversenum(int num)
{
	int digit,revnum=0;
	while(num>0)
	{
		digit=num%10;
		revnum=revnum*10+digit;
		num=num/10;
	}
	return revnum;
}

int main()
{
	int n;
	cin>>n;
	int i,num1,num2,revnum1,revnum2,sum=0;
	for(i=0;i<n;i++)
	{
		cin>>num1>>num2;
		revnum1=reversenum(num1);
		revnum2=reversenum(num2);
		cout<<reversenum(revnum1+revnum2)<<endl;
	}
	return 0;
}