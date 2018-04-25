#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,j=0;
		cin>>n;
		int med[n],counter=0;
		int arr[n];
		while(j<n)
		{
		 for(int i=0;i<n;i++)
		 	scanf("%d",&arr[i]);
		  sort(arr,arr+n);
		  j++;
		  med[counter++]=arr[n/2];
		}
		sort(med,med+n);
		printf("%d\n",med[n/2]);
	}
	return 0;
}

