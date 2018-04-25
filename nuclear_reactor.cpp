#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a,n,k;
	cin>>a>>n>>k;
	for(int i=0;i<k;i++)
	{
		if(a==0)
		{
			cout<<"0 ";
		}
		else
		{
			cout<<(a%(n+1))<<" ";
			a/=(n+1);
		} 
	}
	return 0;
}
