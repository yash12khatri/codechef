#include<iostream>
using namespace std;
int main()
{
	long long t;		 
	cin>>t;
     while(t--)
	{
		long long n,a,i;
		a=0;
		cin>>n;
        for (int i=5; n/i>=1; i *= 5)
          a += n/i;
	   cout<<a<<endl;
	}
	return 0;
} 
 

