#include<bits/stdc++.h>
using namespace std;
bool checker(long arr[],int n,int d,long long ttl)
{
	for(int j=0;j<d;j++)
	{
		long long sum=0,count=0;
    	for(int i=j;i<n;i+=d)
   	    {
   	    	sum+=arr[i];
			   count++;		
       	}
		   if(sum%count!=0 || ttl/n!=sum/count)
		   return 1;	
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		long arr[n];
		long long ttl=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			ttl+=arr[i];
		}
		if(ttl%n!=0)
		{
			cout<<"-1\n";
			continue;	
		}
		else if(checker(arr,n,d,ttl))
		{
		    	cout<<"-1\n";
			continue;	
		}
		 
		ttl/=n;
			long long final=0;
	 /*	for(int j=0;j<d;j++)
	 	{
	 		 for(int i=0;i<n;i++)
   	     { 
	  	   if(i+d<n&&arr[i+d]>ttl)
		    {
		    	int x=arr[i+d]-ttl;
		    arr[i+d]=ttl;
		 	arr[i]=arr[i]+x;
		 	final+=x;
		    }   
     		else if(i+d<n&&arr[i]>ttl)
	      	{
	      		int x=arr[i]-ttl;
	      		arr[i]=ttl;
		 	arr[i+d]=arr[i+d]+x;
		 	final+=x;
		    } 
		   
	 }
}*/
	    for(int i=0;i<d;i++){
	     	for(int j=i;j+d<n;j=j+d){
	     		if(arr[j] > ttl){
	     			final += arr[j] - ttl;
	     			arr[j+d] += (arr[j] -ttl);
				 }
				 else if(arr[j] < ttl){
				 	final += ttl - arr[j];
				 	arr[j+d] -= ttl -arr[j]; 
				 }
			 }
		 } 	 
		cout<<final<<endl;	
	 }
	return 0;
} 
 
