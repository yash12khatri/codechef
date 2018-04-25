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
	  arr[i]=i+1;
	  int temp;
	 for(int i=0;i<n-1;i+=2)
	  {
	  	temp=arr[i];
	  	arr[i]=arr[i+1];
	  	arr[i+1]=temp;
	  }
	  if(n&1){
	  	temp=arr[n-1];
	  	arr[n-1]=arr[n-2];
	  	arr[n-2]=temp;	  	
	  }
	  for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
	  cout<<endl;
	}	
}
