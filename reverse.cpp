#include<bits/stdc++.h>
using namespace std;
int reverse(int n,int x)
{
	return (n>0)?reverse(n/10,(x*10+n%10)):x; 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<reverse(n,0)<<endl; 
	}
}
