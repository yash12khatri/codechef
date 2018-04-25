//cant calculate factorial of >25 using this approach need array
#include<iostream>
#include<math.h>
using namespace std;
int pow5(int n)
{
	long long a,i;
     	a=0;
        for (int i=5; n/i>=1; i *= 5)
          a += n/i;
	   return a;
}
int main()
{
	int t;
	cin>>t;
	int arr[101]={0};
	for(int i=1;i<101;i++) 
	arr[i]=pow5(i);
	
	while(t--)
	{
		int n;
		cin>>n;
		long long res=1;
		int count=0,count2=0;		
		for(int i=1;i<=n;i++)
		{
	     	int x=i;
			while(x%5==0)
			{
				x=x/5;
				count++;
			} 
			while(x%2==0)
			{
			  x=x/2; 
			  count2++;	
			}
		   	res=res*x;
		} 
		long long k=pow(2,(count2-count));
		cout<<res*k;
		for(int i=1;i<=arr[n];i++)
		cout<<"0";
		
	   cout<<endl;	
	}
	return 0;
}
