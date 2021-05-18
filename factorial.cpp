#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	int fact=1,i;
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial of a number is"<<fact;
}
