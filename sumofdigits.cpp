#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,res=0,r;
	cin>>num;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res+r;
	}
	cout<<"sum of digits is:"<<res;
}
