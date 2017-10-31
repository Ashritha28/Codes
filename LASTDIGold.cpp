#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
		int a;
		long long int b;
		int m;
		cin >> a >> b;
		if (a==0 && b!=0)
			cout << "0" << endl;
		else if (b==0 && a!=0)
			cout << "1" << endl;
		else if (a==1 || a==11)
			cout << "1" << endl;
		else if (a==5 || a==15)
			cout << "5" << endl;
		else if (a==6 || a==16)
			cout << "6" << endl;
		else if (a==10 || a==20)
			cout << "0" << endl;
		else if (a==2 || a==12)
		{
			m = b%4;
			if(m==0)
				cout << "6" << endl;
			else if (m==1)
				cout << "2" << endl;
			else if (m==2)
				cout << "4" << endl;
			else
				cout << "8" << endl;
		}
		else if (a==3 || a==13)
		{
			m = b%4;
			if(m==0)
				cout << "1" << endl;
			else if (m==1)
				cout << "3" << endl;
			else if (m==2)
				cout << "9" << endl;
			else
				cout << "7" << endl;
		}
		else if (a==4 || a==14)
		{
			m = b%2;
			if(m==0)
				cout << "6" << endl;
			else
				cout << "4" << endl;
		}
		else if (a==7 || a==17)
		{
			m = b%4;
			if(m==0)
				cout << "1" << endl;
			else if (m==1)
				cout << "7" << endl;
			else if (m==2)
				cout << "9" << endl;
			else
				cout << "3" << endl;
		}
		else if (a==8 || a==18)
		{
			m = b%4;
			if(m==0)
				cout << "6" << endl;
			else if (m==1)
				cout << "8" << endl;
			else if (m==2)
				cout << "4" << endl;
			else
				cout << "2" << endl;
		}
		else
		{
			m = b%2;
			if(m==0)
				cout << "1" << endl;
			else
				cout << "9" << endl;
		}

	}
	return 0;
}