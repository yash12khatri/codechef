#include<iostream>
using namespace std;
int noofholes(char st[])
{
	int count=0;
	for(int i=0;st[i];i++)
	{
		if(st[i]=='B') 
		{
			count+=2;
			continue; 
		}
	    else if(st[i]=='A'||st[i]=='D'||st[i]=='O'||st[i]=='P'||st[i]=='Q'||st[i]=='R')
	    {
	    	count++; 
	    	
		}
		
	}
	return count;
	
}
int main()
{
int t;
	  cin>>t;
	while(t--)
	{
		char st[100];
		cin>>st;
		cout<<noofholes(st)<<endl;		  
	}
	return 0;
} 
