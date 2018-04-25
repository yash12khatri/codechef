//TLE
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ 
   int n;
   cin>>n; 
	multiset<int,less<int> > s;  
	int temp;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		s.insert(arr[i]); 
	} 
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s.find(arr[i]*arr[j])==s.end())
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	cout<<"yes";
	else
	cout<<"no";
	cout<<endl; 
}
		
	return 0;
}
