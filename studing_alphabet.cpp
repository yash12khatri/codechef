#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	bool hash[26]={0};
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	hash[str[i]-'a']=1;
	int n;
		cin>>n;
	while(n--)
	{ 
		string var;
		cin>>var;
		int flag=0;
		for(int i=0;i<var.length();i++)
		{
			if(!hash[var[i]-'a']) 
			{
				flag=1;
				break;
			}
		}
		
		 
		if( flag==1)
		cout<<"No\n";
		else
		cout<<"Yes\n";
	}
	return 0;
}
