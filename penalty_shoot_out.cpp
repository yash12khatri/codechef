#include<bits/stdc++.h>
using namespace std;
int main()
{ 
string s;
int matches_left;
while(getline(cin,s))
{
	int count1=0,count2=0,i;
	for(i=0;i<20;i++)
	{
		if(s[i]=='1')
	  {
		  if(i%2==0)count1++;
		  else count2++;
	  }
	  
	  printf("i=%d   count1=%d   count2=%d\n",i,count1,count2);
	  
	  
	  if(i<9&&count1!=count2)
	  {
	      if(count1>count2)
	      {
	          if(i%2==0)
	          {
	              if((9-i)/2+1<count1-count2)  break;
	          }
	          else
	          {
	              if((9-i)/2<count1-count2)  break;
	          } 
	      }
	      else if(count1<count2)
	      {
	          if(i%2==0)
	          {
	              if((9-i)/2+1<count2-count1)   break; 
	          }
	          else
	          {
	              if((9-i)/2<count2-count1)  break;
	          }
	          
	          
	          
	      }
	  } 
	   
      if(i>=9&&i%2!=0&&count1!=count2)
	    break; 
	}
	if(count1==count2)
	printf("TIE\n");
	else if(count1>count2)
	  printf("TEAM-A %d\n",i+1);
	else 
	  printf("TEAM-B %d\n",i+1);
 
}

return 0;
}
