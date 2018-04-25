 #include<iostream>
 #include<math.h>
using namespace std;
int main()
{
int t;
	  cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b; 
		if(a>b)
		cout<<">";
		else if(a<b)
		cout<<"<";
		else
		cout<<"=";
		  cout<<endl;
	     	 		  
	}
	return 0;
} 
