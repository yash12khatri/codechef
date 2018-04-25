#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
void fun(char *str2,int ind)
{
	if(str2[ind]>=97&&str2[ind]<=122)
    	str2[ind]=str2[ind]-32;
}
int noofspace(char *str)
{
	int count=0;
	for(int i=0;str[i];i++)
	 if(str[i]==32)
	 count++;
	 return count;
}
void fun2(char *str,int ind)
{
   	if(str[ind]>=65&&str[ind]<=90)
    	str[ind]=str[ind]+32;	
}

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   
	char str[40];
	  		scanf("%*c%[^\n]s",str);
		for(int i=0;str[i];i++)
		{
			fun2(str,i);
		} 
		    int x=noofspace(str); 
	    fun(str,0);
	      if(x==1)
		 { 
		  	str[1]='.';
		  for(int i=2;str[i];i++)
		   { 
		  	if(str[i]!=32) 
            {
            	str[i]='0';
			 }		     
			 else
			 {
			 fun(str,i+1);
			 	break;
			 }
	   	    }
	     }
	     else if(x==2)
	     {
	     		str[1]='.';
	     		int n=0;
	     		for(int i=2;str[i];i++)
	     		{
	     		  if(str[i]!=32&&n!=2)
				   {
				   	str[i]='0';
					 }	
		     	 else if(str[i]==32)
					 {
					  n++;
					  fun(str,i+1);
					  if(n!=2)
					  str[i+2]='.';
					  i+=2; 
					 }
				} 
			fflush(stdin);
		 }
		 for(int i=0;i<strlen(str);i++)
		 if(str[i]!='0')
		   cout<<str[i];
		   cout<<endl;
	  }
		 
	return 0;
} 
