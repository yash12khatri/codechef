#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
	  cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[n+1]={0},x;
		for(int i=0;i<m;i++)
		{
				cin>>x;
				arr[x]=1;
		}
		
			
				int arr1[n-m];
				int arr2[n-m],i=0,j=0,counter=0;
		for(int k=1;k<=n;k++)
		{
			if(!arr[k]&&counter==0)
			{
				counter=1;
				arr1[i++]=k;
			}
			else if(!arr[k]&&counter==1)
			{
				counter=0;
				arr2[j++]=k;
			}
		}
		 for(int k=0;k<i;k++)
		 cout<<arr1[k]<<" ";
		cout<<endl;	 		
		for(int k=0;k<j;k++)
		cout<<arr2[k]<<" ";
		cout<<endl;  
	}
	return 0;
} 
