#include <bits/stdc++.h>
using namespace std;

int factzeroes(int num)
{
	int product = 1;
	int numzeroes = 0;
	while(product<=num)
	{
		product = product * 5;
		numzeroes = numzeroes + num/product; 
	} 

	return numzeroes;
}

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n;
		cin >> n;
		cout << factzeroes(n) << endl;
	}

	return 0;

}

