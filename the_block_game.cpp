#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int flag=0;
		for(int i=0,j=str.length()-1;i<j;j--,i++)
		{
			if(str[i]!=str[j])
			{
				flag=1;
			}
		}
		if(flag==1)
		cout<<"losses\n";
		else
		cout<<"wins\n";
		
	}
	return 0;
}
