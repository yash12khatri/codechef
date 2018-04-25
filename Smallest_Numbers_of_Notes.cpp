#include<iostream>
using namespace std;
int main()
{
	
int t;
	  cin>>t;
	while(t--)
	{
		int n;;
		cin>>n; 
		int a=n;
		int count=0;
		int arr[6]={1,2,5,10,50,100};
		for(int i=5;i>=0;i--)
		{
			if(a>=arr[i])
			{int x;
				x=a/arr[i]; 
				a=a-(x*arr[i]); 
				count+=x;
			}
		}
		
		cout<<count<<endl;
	}
	return 0;
	
} 
