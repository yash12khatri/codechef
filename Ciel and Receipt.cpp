//cant calculate factorial of >25 using this approach need array
#include<iostream>
#include<math.h>
using namespace std;
int pow2(int n)
{
	int i,ind;
    for(i=0;i<=11;i++)
    {
    if(n-pow(2,i)<0)
        	 break;
	  ind=i; 
	} 
    return ind;
}
int main()
{
	int t;
	cin>>t;  
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		while(n!=0)
		{
			int x=pow2(n);
			n=n-pow(2,x);
			count++;
		} 
	   cout<<count<<endl;	
	}
	return 0;
}
