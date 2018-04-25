
#include<bits/stdc++.h>
#define OPTIMIZE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
long arr[2001]={0}; 
long long dp[1000001]={0};
long gmax=1;
long calc(long k)
{
 long rem,x=0,y=0;
  while(k>0)   
 {
  rem=k%10;  
     k/=10;
    if(rem%2==0)
    x+=rem;
    else
    y+=rem;
} 
  return (x-y);
} 
void init() 
{
    for(long i=0;i<2001;i++)
           arr[i]=calc(i); 
}
long long getval(long x)
{
   if(dp[x]!=0)
   return dp[x];
    
	long long ttl,i,j;
	for(i=gmax;i<x+1;i++)
    {
  	ttl=0;
  	for(j=i+1;j<2*i;j++)
  	{
  		ttl+= abs (arr[j%1000] + arr[j/1000]);  
	  }
	  dp[i]=dp[i-1]+(2*ttl)+abs (arr[j%1000] + arr[j/1000]); 
	
    } 
    gmax=x;  
  return dp[x];
}
int main()
{ 
  OPTIMIZE
  long t;
  long long ttl,i,j,n;
  dp[1]=2;
  
  init();
    cin>>t;
  while(t--)
    {  
       cin>>n;
       cout<<getval(n)<<endl;
   }
return 0;
}  
