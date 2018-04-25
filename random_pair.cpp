#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[1001]={0};
		int n,x,second=0,first=0,count=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x);
			arr[x]++;
		}
		for(int i=1000;i>0&&count<2;i--)
		{
		  if(arr[i]>0)
		  {
		  	if(first==0)first=arr[i];
		  	else second=arr[i];
		  	count++;
		  }
		} 
		if(first>1)
			printf("%.8f",(first*((double)first-1))/(n*((double)n-1)));
		else
		  	printf("%.8f",(double)second/(n*((double)n-1)/2));
		  	cout<<endl;
	}
	return 0;
}
