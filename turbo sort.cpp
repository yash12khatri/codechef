#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,temp,i;
	scanf("%d",&n);
	int arr[100000];
	for(i=0;i<n;i++)
	  {
	  	scanf("%d",&temp);
	  	arr[temp]++;;
	  }
	  for(i=0;i<100000;i++)
	  {
	  	if(arr[i]>0)
	      while(arr[i]--)
	  	    printf("%d\n",i);
	  }
	    return 0;
}
