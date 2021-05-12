#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	bool isprime=true;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			count++;
			cout<<"not prime";
			break;
		}
	}
	if(count==0)
	{
		cout<<"prime";
	}
}

