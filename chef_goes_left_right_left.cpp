#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{ 
	  int n,r;
	  cin>>n>>r;
	  int arr[n];
	  for(int i=0;i<n;i++)
	   scanf("%d",&arr[i]);
	  if(arr[n-1]!=r)
	  {
	  	cout<<"NO"<<endl;
	  	continue;
	  }
	  int min=0,max=INT_MAX;
	  int flag=1;
	  for(int i=0;i<n;i++)
	  {
	  	if(arr[i]>max||arr[i]<min)
	  	{
	  		flag=0;
	  		break;
		  }
	  	if(arr[i]>r)
	  	{
	  		max=arr[i];
		  }
		  if(arr[i]<r)
		  {
		  	min=arr[i];
		  }
	  	 
	  } 
	  if(flag)
	  cout<<"YES"<<endl;
	  else
	  cout<<"NO"<<endl;
	}
	return 0;
} 
/*
5 
4 1111
5123 3300 783 1111 */
