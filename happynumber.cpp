#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,res=0,r;
	cin>>num;
	while(1)
	{
		r=num%10;
		num=num/10;
		res=res+r*r;
		if(num==0)
		{
			num=res;
			res=0;
			if(num>=1 && num<=9)
			{
				break;
			}
		}
	}
	if(num==1)
	{
		cout<<"happy number";
	}
	else
	{
		cout<<"not a happy number";	
	}
}
