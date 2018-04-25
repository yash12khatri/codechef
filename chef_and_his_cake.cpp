#include<bits/stdc++.h>
using namespace std;
int func(string str[],int n,int m,char required_color)
{
    int ttl=0;
    char temp=required_color;
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<m;j++)
        {
            if(str[i][j]=='R'&&required_color=='G')
                ttl+=5;
            else if(str[i][j]=='G'&&required_color=='R')
              ttl+=3;
            if(required_color=='R')
              required_color='G';
            else
            required_color='R';
        }
        if(m%2==0)
        {
            if(required_color=='R')
              required_color='G';
            else
            required_color='R';
            
        } 
    }
    return ttl;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{ 
int t;
cin>>t;
while(t--)
{
	int n,m;
	cin>>n>>m;
	string str[n];
	for(int i=0;i<n;i++)
	    cin>>str[i];
   cout<<min( func(str,n,m,'R'),
              func(str,n,m,'G') )<<endl;
	
}

return 0;
}
