#include<bits/stdc++.h>
using namespace std;
bool checker(int arr[],int n,int d)
{
	for(int j=0;j<d;j++)
	{
		int sum=0,count=0;
    	for(int i=j;i<n;i+=d)
   	    {
   	    	sum+=arr[i];
			   count++;		
       	}
		   if(sum%count!=0)
		   return 0;	
	}
	return 1;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int arr[n];
		long long ttl=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			ttl+=arr[i];
		}
		if(ttl%n!=0||(!checker(arr,n,d)))
		{
			cout<<"-1\n";
			continue;	
		}
		ttl/=n;
		int final=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]>ttl)
			final+=arr[i]-ttl;
		}
		cout<<final<<endl;	
	 }
	return 0;
}
