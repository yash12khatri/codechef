#include<stdio.h>
int main()
{
	int t,i;
	long long int n,m,mod;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&n,&m);
		if(n==m||n==1)
			printf("0\n");
		else
		{
		mod=m%n;
		if(mod==0)
		{
			printf("0\n");
		}
		else
		 {
		printf("%lld\n",n-mod);
	    }
	}
	}
	return 0;

}
