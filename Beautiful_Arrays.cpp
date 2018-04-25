#include<bits/stdc++.h>
using namespace std;
bool beautiful(long arr[],int n,set<long>& s)
{ 
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(s.find(arr[i]*arr[j])==s.end())
		  return false;
	}
}
return true;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long arr[n];
		set<long> s;
 		for(int i=0;i<n;i++)
 		{ 
		cin>>arr[i];
		s.insert(arr[i]);
		}
		if(beautiful(arr,n,s))
		cout<<"yes\n";
		else
		cout<<"no\n";
	}
}
