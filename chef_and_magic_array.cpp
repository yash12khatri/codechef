#include<bits/stdc++.h>
using namespace std;
void swap(string &str,int i,int j)
{
	char x; 
	x=str[i];
	str[i]=str[j];
	str[j]=x; 
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		string output;
		int n=str.length();
		int x,y;
		cin>>x>>y;
		int ca=0,cb=0;
		int kiwi[100001]={0};
		int counter=0;
		int latest=0;
		for(int i=0;i<n;i++)
		{
		  if(str[i]=='a')	
		  {
		  	ca=0;
		  	  for(int j=i-1;j>=0;j--)		  	{
		  	 	if(str[j]!='a')
		  		break;
				  ca++;
			         }
		  }	
		else
		  {
		  	cb=0;
		  	for(int j=i-1;j>=0;j--)
		  	{
		  		if(str[j]!='b')
		  		break;
				   cb++;
			  } 
		   }	  
		   if(str[i]=='a'&&ca>=x)
		   {
		   	int j;
		   	for(j=i;j<n;j++)
		   	    if(str[j]=='b')
		   	      break;
		   	if(j!=n)
		   	swap(str,i,j);
		   	else if(latest<=i-x)
		   	{
		   	kiwi[counter++]=i;
		   	latest=i;
			   }
		   }
		   else if(str[i]=='b'&&cb>=y)
		   {
		   	int j;
		   	for(j=i;j<n;j++)
		   	    if(str[j]=='a')
		   	      break;
		   	if(j!=n)
		   	swap(str,i,j);
		   	else if(latest<=i-y)
		   	{ 
		   	kiwi[counter++]=i;
		   	latest=i;
			   }
		   } 
 }
 
 int z=counter;
 counter=0;
 
 for(int i=0;i<n;)
 { 
 	if(counter<z&&kiwi[counter]==i)
 	{
 	cout<<"*";
 	counter++;
	} 
	
 	else
 	{
 	
    cout<<str[i]; 
    i++;
	 }
   } 
	cout<<endl;	
	}
	return 0;
}
