#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long ttl1=0,ttl2=0;
		int n;
		cin>>n;
		int arr1[n],arr2[n];
		for(int i=0;i<n;i++)
		 cin>>arr1[i];
		for(int i=0;i<n;i++)
		 cin>>arr2[i];
		 for(int i=0;i<n-1;i+=2)
		 {
		 	ttl1+=arr1[i]+arr2[i+1];
		 	ttl2+=arr1[i+1]+arr2[i]; 	
		 }
		 if(n%2!=0)
		 {
		 	ttl1+=arr1[n-1];
		 	ttl2+=arr2[n-1];
		 }
		 cout<<((ttl1<ttl2)?ttl1:ttl2)<<endl;
	}
	return 0;
}
