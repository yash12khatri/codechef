#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{ 
	  int n,p;
	  cin>>n>>p;
	  if(p==1||p==2)
	  {
	  	cout<<"impossible"<<endl;
	  	continue;
	  }
	  string str;
	   str.append(p,'a');
	   str[p/2]='b';
	   if(p%2==0)
	   { 
	   	str[(p/2)-1]='b';
	   }
	   for(int i=0;i<(n/p);i++)
	   {
	   	cout<<str;
	   }
	   cout<<endl;
	}
	return 0;
} 
/*
5 
4 1111
5123 3300 783 1111 */
