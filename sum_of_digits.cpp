#include<bits/stdc++.h>
using namespace std;
int sod(int n)
{
	return (n>0)?n%10+sod(n/10):0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<sod(n)<<endl;
	}
	return 0;
}
