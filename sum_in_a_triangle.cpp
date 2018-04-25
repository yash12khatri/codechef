#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
 /*
int auxmaxsum(int arr[],int n,int i,int row,int sum)
 {
 	if(row>=n)
 	return sum;
 	return max(auxmaxsum(arr,n,i+row,row+1,sum+arr[i+row]), 
	           auxmaxsum(arr,n,i+row+1,row+1,sum+arr[i+row+1]));
 	
 }
 int maxsum(int arr[],int size,int n)
{
	return auxmaxsum(arr,n,0,1,arr[0]);
	 
}*/
int main()
{
	
	 int t;
	 cin>>t;
	while(t--)
	{ 
		int n;
		cin>>n;  
		int arr[n][n]={0};
		for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
					cin>>arr[i][j];
		for(int i=n-1;i>0;i--)
		{
			for(int j=0;j<i;j++)
			arr[i-1][j]+=max(arr[i][j],arr[i][j+1]);
		}
		cout<<arr[0][0]<<endl;
	}
	return 0;
} 

