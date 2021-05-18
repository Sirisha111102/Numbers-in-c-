#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,a=0,b=1,sum;
	int i;
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if(i==1)
		{
			cout<<a<<" ";
			continue;
		}
		if(i==2)
		{
			cout<<b<<" ";
			continue;
		}
		sum=a+b;
		a=b;
		b=sum;
		cout<<sum<<" ";
	}
}
