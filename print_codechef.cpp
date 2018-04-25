#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char str[n+1];
	cin>>str;
	int arr[26]={0};
	for(int i=0;i<n;i++)
	arr[str[i]-'a']++;
	int a[6]={arr[2]/2,arr[3],arr[4]/2,arr[5],arr[7],arr[14]};
	sort(a,a+6);
	cout<<a[0]<<endl;
	return 0;
}
