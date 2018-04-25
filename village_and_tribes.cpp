#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{ 
	string str;
	cin>>str;
	int alast=-1,blast=-1,aflag=0,bflag=0,acount=0,bcount=0,n=str.length();
	for(int i=0;i<n;i++)
	{
	   if(str[i]=='A')
	   {
	   	bflag=0;
	   		  if(aflag==1)
	   		  	{
	   				if(alast==-1)  alast=i;
	   				acount+=i-alast;
		   		}
		   		else
		   		{
		   				aflag=1;
		   				acount++;
		   		}
		alast=i;
	   }
	   
	   else if(str[i]=='B')
	   {
	   	aflag=0;
			   	  if(bflag==1)
			   	  {
			   				if(blast==-1)  blast=i;
			   		bcount+=i-blast;
			   		
				   }
				   else
				   {
				   	bflag=1;
				   	bcount++;
				   }
	   	blast=i;
	   	
	   }
		   
	}
	cout<<acount<<" "<<bcount<<endl;
	}
	return 0;
} 
