#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long temp,max;
	int n,q,x,type,a,b,c; 
	cin>>t;
	while(t--)
	{ 
		cin>>n>>q;
		set <int> arr;
		for(int i=0;i<n;i++)
		{
		scanf("%d",&temp); 	
		arr.insert(temp);
		}
		set <int> :: iterator itr,prev,prevprev,next; 
    /*for (itr = arr.begin(); itr != arr.end(); ++itr)
    {
        cout << '\t' << *itr;
    } */
     
		while(q--)
		{
			 scanf("%d%d",&a,&b);
			 if(a==1)
			  arr.insert(b);
			 else
			   arr.erase(b);
			   long long cost=0,flag=1;
			    
			   next=(arr.begin())++;
			for (itr = arr.begin(); itr != arr.end();)
			{
			   if((next) != arr.end())
				   cost+=abs(*(itr)-*(next));
				else
				flag=1;
				prev=next;
				itr++;
				if(itr!=arr.end())
				itr++;
				next=itr;
				if(itr!=arr.end())
				next=next++;
			}
			if(flag)
			{
			itr=prev;
			itr--;
			cost+=abs(*(prev)-*(itr));	
			}
			 
			printf("%lld\n",cost);
		      	
		} 
		  
	}
	return 0;
}
