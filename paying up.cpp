#include<iostream>
using namespace std;
bool checksum(int i,int arr[],int n,int sum)
{
	if(i>=n)
	return 0;
	if(sum==arr[i])
	return 1;
	if(sum<0)
	return 0;
	return checksum(i+1,arr,n,sum-arr[i])||checksum(i+1,arr,n,sum);
}
int main()
{
int t;
	  cin>>t;
	while(t--)
	{
		int n,sum;
		cin>>n>>sum;
		int arr[n];
		for(int i=0;i<n;i++)
				cin>>arr[i];
	    if(checksum(0,arr,n,sum))
	    cout<<"Yes";
	    else
	    cout<<"No";
		 
		cout<<endl;	 		  
	}
	return 0;
} 
