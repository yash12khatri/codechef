#include<stdio.h>
int main()
{
	long long n,x,a,i,t;	 
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		a=0;
		scanf("%lld",&x);
		printf("\n");
		while(x>5)
		{
			a+=(x/5);
			x/=5;
		}
		printf("%lld",a);
	}
	return 0;
} 
 

