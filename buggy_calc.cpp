#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2; 
		int i=str1.length();
		int j=str2.length();
		int a=0,b=0;
		if(i>j)
		{
			while(i!=j)
			{
				cout<<str1[a++];
				i--;
			}
		}
		else if(i<j)
		{
			while(i!=j)
			{
				cout<<str2[b++];
				j--;
			}
		}
		
		while(i!=0)
		{
			cout<<((int)str1[a++]+str2[b++]-48-48)%10;
			i--;
		}
		cout<<endl;
	}
	return 0;
	
}
