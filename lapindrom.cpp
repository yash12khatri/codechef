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
		int arr[26]={0};
		int n=str.length();
		for(int i=0;i<n/2;i++)
		{
			arr[str[i]-97]++;
		}
		for(int i=(n%2==0?n/2:(n/2)+1);i<n;i++)
		{
		 arr[str[i]-97]--;
		}
		int flag=0;
		for(int i=0;i<26;i++)
		{
			if(arr[i]!=0)
			{
				cout<<"NO\n";
				flag=1;
				break;
			} 
		}
		if(flag==0)
		cout<<"YES\n";
	}
	return 0;
}
