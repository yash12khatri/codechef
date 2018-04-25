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
			int arr[n];
			for(int i=0;i<n;i++)
			   cin>>arr[i];
			   int k;
			   cin>>k;
			   int counter=1,x=arr[k-1];
			   for(int i=0;i<n;i++)
			   {
			   	if(arr[i]<x)
			   	counter++;
			   }
			   cout<<counter<<endl;
		}
	return 0;
}
