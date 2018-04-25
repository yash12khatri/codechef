#include<bits/stdc++.h>
using namespace std;
bool valid(int arr[],int n)
{ 
if(!(n&1))
return false;  
int l=n/2;
n--;
for(int i=0;i<=l;i++)
{ 
 	if(arr[i]!=i+1||arr[i]!=arr[n-i])
		  return false;
}
return true;
	
}
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
		if(valid(arr,n))
		cout<<"yes\n";
		else
		cout<<"no\n";
	}
}
