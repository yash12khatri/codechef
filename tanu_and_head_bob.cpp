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
		string str;
		cin>>str;
		bool hash[26]={0};
		for(int i=0;i<n;i++)
		{
			hash[str[i]-'A']=1;
		}
		 if(hash['Y'-'A'])
		 {
		 	cout<<"NOT INDIAN\n";
		 }
		 else if(hash['I'-'A'])
		 {
		 	cout<<"INDIAN\n"; 
		 }
		 else
		 cout<<"NOT SURE\n";
		}
	return 0;
	
} 
