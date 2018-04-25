#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str[1000002];
		cin>>str;
		int arr[100]={0},a[10]={0};
		int n=strlen(str);
		for(int i=0;i<n;i++)
		{
			a[str[i]-48]++;
		}
		for(int i=0;i<10;i++)
		{
		for(int j=0;j<10;j++)
			{
			  	if(i==j)
				 continue;
				 if(a[i]>1)
				 {
				 	arr[i*10+i]++;
				 }
				 if(a[j]>1)
				 {
				 	arr[j*10+j]++;
				 }
			    arr[i*10+j]++;
			    arr[i*10+j]++;
			} 
		} 
		for(int i=65;i<=90;i++)
		{
			if(arr[i])
			cout<<(char)i;
		}
		cout<<endl; 
	}
}
