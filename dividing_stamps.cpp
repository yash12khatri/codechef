#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,x;
	long long sum=0;
	cin>>n;
	int k=n;
	while(k--)
	{
		scanf("%d",&x);
		sum+=x;
	}
	if(sum==(n*(long long)(n+1))/2)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
