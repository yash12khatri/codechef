//incomplete
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long a,b,c;
		cin>>a>>b>>c;
		if(a>=b)
		{
			if(a>=c)
			cout<<b;
			else
			cout<<a;
		}
		else if(b>=c)
		{
			if(a>=c)
			cout<<a;
			else
			cout<<c;
		}
		else
		cout<<b; 
		cout<<endl;
		
	}
	return 0;
}
