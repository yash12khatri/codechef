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
			   int final=INT_MAX;
			   for(int i=0;i<n-1;i++)
			     for(int j=i+1;j<n;j++)
			     {
			     	if(abs(arr[i]-arr[j])<final)
			     	 final=abs(arr[i]-arr[j]);
				 }
				 cout<<final<<endl;
			   
		}
	return 0;
}
