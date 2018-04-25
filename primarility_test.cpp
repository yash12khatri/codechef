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
		int flag=0;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
     	}
     	if(n==1)
     	flag=1;
     	if(flag==0)
     	cout<<"yes\n";
     	else
     	cout<<"no\n";
		}
	return 0;
	
} 
