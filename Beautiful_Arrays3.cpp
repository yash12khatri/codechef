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
		int var;
		int n1=0,nm1=0,no=0;
		for(int i=0;i<n;i++)
		{
			cin>>var;
			if(var==1)
			n1++;
			else if(var==-1)
			nm1++;
			else if(var!=0)
			no++;
			
		}
		if((no>1)||(nm1>0&&no>0)||(nm1>1&&n1<1))
		cout<<"no\n";
		else
		cout<<"yes\n";
	}
	return 0;
}
