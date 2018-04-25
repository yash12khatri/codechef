#include<bits/stdc++.h>
using namespace std;
int main()
{
	
int t;
	  cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long sum=0;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i]; 
		int min=arr[0],minind=0;
		for(int i=1;i<n;i++)
		{
			if(arr[i]<min)
			{
				min=arr[i];
				minind=i;
			}
		}
		sum+=min;
		arr[minind]=INT_MAX;
		min=arr[0];
		for(int i=1;i<n;i++)
		{
			if(arr[i]<min)
			{
				min=arr[i];
			}
		}
		sum+=min;
		cout<<sum<<endl;
	}
	return 0;
	
} 
