#include<iostream>
using namespace std;
int main()
{
	
int t;
	  cin>>t;
	while(t--)
	{
		int n;
		int flag=0;
		int sum=0;
		for(int i=0;i<3;i++)
		{
			cin>>n;
			if(n==0)
			flag=1;
			sum+=n;	
		} 
		if(flag!=1&&sum==180)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
	
} 
