#include<bits/stdc++.h>
using namespace std;
map<long long,long long> m;
long long fun(long long n)
{
	if(n<12)
	return n;
	if(m[n]!=0) return m[n];
	long long x=fun(n/2)+fun(n/3)+fun(n/4);
	 if(x>m[n])m[n]=x;
	 else
	  m[n]=n;
	  return m[n];
}
int main()
{
	long long n;
	while((cin>>n))
	{
		cout<<fun(n)<<endl;
	}
	return 0;
	
}
