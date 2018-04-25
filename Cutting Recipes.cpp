//cant calculate factorial of >25 using this approach need array
#include<bits/stdc++.h>
#include<math.h>

using namespace std;
void print(int arr[],int n,int divisor)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]/divisor<<" ";
    cout<<endl;
}
int main()
{
	int t;
	cin>>t;
 	while(t--)
	{
		int n;
		cin>>n;int arr[n];
		int x;		
		for(int k=0;k<n;k++)
			     	cin>>arr[k]; 
		
		x=arr[0];
		for(int i=1;i<n;i++)
	      if(x>arr[i])
	      x=arr[i]; 
	      
	    int ind=1;
	    for(int j=2;j<=x;j++)
	    { 
		  int i;
	     for(i=0;i<n;i++)
	      if(arr[i]%j!=0)
	      {
	     	break; 
		  }
		  if(i==n)
		   ind=j; 
		}
	 	print(arr,n,ind);
		}
	return 0;
}
