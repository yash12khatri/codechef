#include<iostream>
using namespace std;
int main()
{
int t;
	  cin>>t;
	while(t--)
	{
		int a,b,m;
		cin>>a>>b>>m;
		int count=0;
		if(a<b)
		{
			int x=b/m;
			int y=a/m;
			count=x-y;			
		}
		if(a==m)
		count++;
		cout<<count<<endl;	 		  
	}
	return 0;
} 
