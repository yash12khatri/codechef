#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long temp,max;
	int n,q,x,type,a,b,c; 
	cin>>t;
	while(t--)
	{ 
		cin>>n>>q;
		int arr[n];
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]); 
		while(q--)
		{
			 scanf("%d%d%d",&a,&b,&c);
			 if(a==2)
			 {
			 	arr[b-1]=c;
			 	continue;
			 }
			   max=INT_MIN;
			 for(int i=b-1;i<c;i++)
			 {
			 	temp=(arr[i]-arr[b-1])*(long long)(arr[c-1]-arr[i]);
			 	if(max<temp)
			 	  max=temp;
			 }
			printf("%lld\n",max);
		      	
		}
		  
	}
	return 0;
}
