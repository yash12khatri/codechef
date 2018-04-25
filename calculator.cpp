#include<bits/stdc++.h>
using namespace std;/*
int maxval=0;
long long max(long long a,long long b)
{
	return a>b?a:b;
}  
long long maxsum(int n,int k,int n1,int n2)
{ 
	if(n<0)
	return 0; 
	if(n==0) 
		return n2;   
    return max(maxsum(n-1,k,n1+1,n2),n1==0||n<k?0:maxsum(n-k,k,n1,n1+n2)); 
}*/
int main() 
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,k,a;
		cin>>n>>k; 
	    long long x=n/k;
	    a=(x/2)*k+n%k;
	    k=a*(x-x/2); 		  
		cout<<k<<endl; 	
	}
	return 
	0;
}
