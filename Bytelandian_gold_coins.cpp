#include<bits/stdc++.h>
using namespace std;
 
long long n;
int main()
{   
while(cin>>n)
{ 
	if(n%12==0)
    	cout<<n+n/12<<endl;
	else
	    cout<<n<<endl; 
	}return 0;
}
