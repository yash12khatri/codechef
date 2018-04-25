#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[26]={0},arr1[26],count=0;
		char str[50001];
		 for(int i=0;i<26;i++)	
		 {
		 	cin>>arr1[i];
		 }
		 cin>>str;
		 int l=strlen(str);
		 for(int i=0;i<l;i++)
		 {
		 	if(count==26)
		 	break;
		 	if(!arr[str[i]-97])
		 	{
		 		count++;
		 		arr[str[i]-97]++;
			 }
		 }
		 int ans=0;
		 if(count==26)
		 cout<<ans;
		 else
		 {
		 	for(int i=0;i<26;i++){
		 		if(!arr[i])
		 		{
		 			ans+=arr1[i];
				 }
		 		
			 }
			 cout<<ans;
		 }
	}
	return 0;
}
