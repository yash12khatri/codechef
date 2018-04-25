#include<bits/stdc++.h>
using namespace std;
bool israinbow(int arr[],int n)
{
	int count=1;
	for(int i=0,j=n-1;i<=j;i++,j--)
	{
		if(arr[i]==arr[j]&&(arr[i]==count||arr[i]==count+1))
		{
			if(arr[i]==count+1)
			count++;
			continue;
		}
		return 0;
	}
	if(count==7)
	return 1;
	return 0;
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
		  if(israinbow(arr,n))
		  cout<<"yes\n";
		  else
		  cout<<"no\n";
	}
	return 0;

}
