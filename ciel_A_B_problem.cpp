#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,s;
	cin>>a>>b;
	if((a-b)%10<9)
	cout<<(a-b+1);
	else
	cout<<(a-b-1);
	cout<<endl;
	return 0;
}

