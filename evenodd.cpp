#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,r;
	int e=0,o=0;
	cin>>num;
	while(num!=0)
	{
		r=num%10;
		num=num/10;
		if(r%2==0)
		{
			e+=1;
		}
		else
		{
			o+=1;
		}
	}
	cout<<"even count"<<e;
	cout<<"odd count"<<o;
}
