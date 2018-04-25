#include<bits/stdc++.h>
using namespace std;
int firstdigit(int n)
{
	return (n>=10)?firstdigit(n/10):n;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<n%10+firstdigit(n)<<endl; 		
	}
	return 0;
}
