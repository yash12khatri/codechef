/*submitted solution



t = int(raw_input())
for i in range(t):
    n,q = raw_input().split()
    arr = [int(i) for i in raw_input().split()]
    mult=1
    for j in range(len(arr)):
    	mult*=int(arr[j])
    numbers = map(int, raw_input().split())
    for j in range(0,len(numbers)): 
    	print((int(numbers[j]))//mult),
    print
    
    
    
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,x;
		long long mult=1;
		scanf("%d%d",&n,&q);
		int arr[n];
		long long mults[n/50+1];
		int j=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			mult*=arr[i];
			if(i%50==0)
			{
			mults[j++]=mult;
			mult=1;	
			} 
		}
		if(mult!=1)
		mults[j++]=mult;
		while(q--)
		{
			scanf("%d",&x); 
			for(int i=0;i<j;i++)
			 x=x/mults[i];
			printf("%lld ",x);
		}
		
		 
		
		cout<<endl;
	}
	return 0;
}
