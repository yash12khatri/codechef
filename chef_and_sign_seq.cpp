#include<bits/stdc++.h>
using namespace std; 
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		char str[100002];
		scanf("%*c%s",str);
		int min=0,max=0;
		int counter=0;
		int i=0;
		int flag=0;
		while(str[i])
		{
	       if(str[i]=='<')
			{ 
			if(flag==1)
			counter++;
			else
			counter=0;
			if(max<counter)
			max=counter;
				flag=1;				
			}
			else if(str[i]=='>')
			{ 
		    if(flag==2)
			 counter++;
			else
			 counter=0;
			if(max<counter)
			   max=counter;
			 flag=2;
			} 
		
		
		
		/*
			if(str[i]=='<')
			{
				counter++;
				if(counter>max)
				max=counter;
				flag=1;				
			}
			else if(str[i]=='>')
			{ 
			if(flag==1&&str[i+1]!='>')
			{
			counter=0;	
			}
			else
				counter--;
				if(counter<min)
				min=counter;
			 flag=0;
			}*/
			i++; 
		}   
		cout<<(flag==0?max+1:max+2)<<endl; 	
	}
	return 0;
}
