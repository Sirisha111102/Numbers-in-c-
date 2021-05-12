#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,r,res=0;
	cin>>num;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res+r*r*r;
	}
	if(num==res)
	{
		cout<<num<<"is a armstrong number";
	}
	else
	{
		cout<<"is not a armstrong number";
	}
}
