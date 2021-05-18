#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;//30
	int temp=n;
	for(int i=2;i*i<=temp;i++)//2 to 5
	{
		while(n%i==0)//30%2==0
		{
			cout<<i<<" ";//2
			n=n/i;//30/2-->15
		}
	}
	/*if(n>1)
	{
		cout<<n;
	}*/
}
