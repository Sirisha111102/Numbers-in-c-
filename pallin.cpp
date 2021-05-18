#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,r,temp;
	cin>>num;
	int res=0;
	temp=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res*10+r;
	}
	if(res=temp)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
}
