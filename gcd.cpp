#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int x,y;
	x=max(a,b);
	y=min(a,b);
	int r;
	while(y!=0)
	{
		
			r=x%y;
			x=y;
			y=r;
	}
	cout<<x;
}
