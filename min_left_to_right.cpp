//find the total no way to move from top leftmost element to bottom rigthmost element in a N*M grid
#include<bits/stdc++.h>
using namespace std;
 
int min(int a,int b)
{
	return a<b?a:b;
} 
 
int minsums(vector<vector<int> > &arr,int n)
{
	vector<vector<int> > mem(n,vector<int> (n,0));
	mem[0][0]=arr[0][0];
   for(int i=1;i<n;i++)
   {
   	mem[0][i]=mem[0][i-1]+arr[0][i];
   	mem[i][0]=mem[i-1][0]+arr[i][0];
   } 
    for(int i=1;i<n;i++)
      for(int j=1;j<n;j++)
       mem[i][j]=arr[i][j]+min(mem[i-1][j],mem[i][j-1]);
	 return mem[n-1][n-1];
     
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{int n;
	 cin>>n;
	vector<vector<int> > v(n,vector<int> (n,0));
    for(int i=0;i<n;i++)
    	  for(int j=0;j<n;j++)
        	   cin>>v[i][j];
    	    
     cout<<minsums(v,n)<<endl;
     }
	return 0;
}
