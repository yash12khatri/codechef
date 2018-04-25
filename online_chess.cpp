#include<stdio.h>
#include<iostream>
using namespace std;
struct data
{
	int rating;
	int min;
	int max;
	int time;
	string rate;
	string color;
	bool isavail; 
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	    struct data arr[n];
	    for(int i=0;i<n;i++)
	    {
	    	scanf("%d%d%d%d",&arr[i].rating,&arr[i].min,&arr[i].max,&arr[i].time);
	    	cin>>arr[i].rate;
	    	cin>>arr[i].color; 
	    	arr[i].isavail=true;
		}
		/* for(int i=0;i<n;i++)
	    {
	    	printf("%d %d %d %d",arr[i].rating,arr[i].min,arr[i].max,arr[i].time);
	    	cout<<arr[i].rate<<" ";
	    	cout<<arr[i].color; 
	    	arr[i].isavail=true;
	    	cout<<endl;
		}
		*/
		for(int i=0;i<n;i++)
	    {int iswait=1;
	    int j;
	    	for( j=0;j<i;j++)
	    	{
	    		if(arr[j].isavail && arr[j].rating >=arr[i].min&&arr[j].rating<=arr[i].max &&
				    		   arr[i].rating >=arr[j].min&&arr[i].rating<=arr[j].max&&
	    			 arr[i].time==arr[j].time && 
				 !(arr[i].rate.compare(arr[j].rate)) && (
	    		  (!(arr[j].color.compare("random")) && !(arr[i].color.compare("random")) )  ||
	    		   (!(arr[i].color.compare("white"))&&!(arr[j].color.compare("black")) )|| 
				      (!(arr[j].color.compare("white"))&&!(arr[i].color.compare("black")) )))
				{
					 iswait=0;
					 
					 arr[i].isavail=false;
					 arr[j].isavail=false;
					 break;
				 }				         
	    		  
	    		 
			}
			if(!iswait)
			{
				cout<<j+1;	
				
			} 
			else
			{
				cout<<"wait";
			 }
			cout<<endl;
			 
		}
		
	}
	return 0;
}
