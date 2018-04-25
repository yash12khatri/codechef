#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int c1=0,c2=0,c3=0,c4=0;
  for(int i=0;i<str.length();i++)
  {
  	if(str[i]=='C')
  	{
  		c1++;
	  }
	  else if(str[i]=='H')
	  {
	  	if(c1>0)
	  	{
	  	c2++;
		  c1--;	
		  }	  	 
	  }
	  else if(str[i]=='E')
	  {
	  	if(c2>0)
	  	{
	  	c3++;
		  c2--;	
		  }	  	 
	  }
	  else if(str[i]=='F')
	  {
	  	if(c3>0)
	  	{
	  	c4++;
		  c3--;	
		  }	  	 
	  }
  }
   /*
  int arr1[str.length()]={0};
  int arr2[str.length()]={0};
  int arr3[str.length()]={0};
  int arr4[str.length()]={0};
  int c1=0,c2=0,c3=0,c4=0;
  for(int i=0;i<str.length();i++)
  {
  	if(str[i]=='C')
  	{
  		arr1[c1++]=i;
	  }
	else  if(str[i]=='H')
  	{
  		arr2[c2++]=i;
	  }
	  else  if(str[i]=='E')
  	{
  		arr3[c3++]=i;
	  }
	  else  if(str[i]=='F')
  	{
  		arr4[c4++]=i;
	  }
  }
  int count=0;
 /* for(int i=0;i<c1;i++)
   cout<<arr1[i]<<" ";
   cout<<endl;
   for(int i=0;i<c2;i++)
   cout<<arr2[i]<<" ";
   cout<<endl;
   for(int i=0;i<c3;i++)
   cout<<arr3[i]<<" ";
   cout<<endl;
   for(int i=0;i<c4;i++)
   cout<<arr4[i]<<" ";
   cout<<endl;
  
  for(int i=0;i<c1;i++)
  { 
  	for(int j=i;j<c2;j++)
  	{
  		for(int k=j;k<c3;k++)
  		{
  			for(int l=k;l<c4;l++)
  			{
  				if(count>=c1)
  				{
  					  cout<<count; 
							return 0;
				  }
  				if(arr1[i]<arr2[j]&&arr2[j]<arr3[k]&&arr3[k]<arr4[l])
  				{
  					count++;
  					arr1[i]=500000;
  					arr2[j]=400000;
  					arr3[k]=300000;
  					arr4[l]=200000; 
				}
				
			  }
		  }
	  }
  }*/
  cout<<c4;
  
	return 0;
}
