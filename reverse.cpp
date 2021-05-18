#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,r;
	cin>>num;
	int res=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res*10+r;
		/*if(num==0)
		{
			break;
		}*/
	}
	cout<<res;
}
