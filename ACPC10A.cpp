#include <bits/stdc++.h>
using namespace std;

void aporgp(float x,float y,float z)
{
	int d;
	float r;
	d=y-x;
	if(x!=0)
		r=y/x;
	if(d==z-y)
	{
		cout << "AP " << z+d << endl;
	}

	else if (r==z/y)
	{
		cout << "GP " << z*r << endl;
	}
}


int main()
{
	int num1,num2,num3;
	while(1)
	{
		cin >> num1 >> num2 >> num3;
		if(num1==0 && num2==0 && num3==0)
			break;
		else
			aporgp(num1,num2,num3);
	}
	return 0;
}