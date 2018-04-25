#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int hash[26]={0};
  for(int i=0;i<str.length();i++)
  {
  	hash[str[i]-'A']++;
  }
  int arr[4]={'C','H','E','F'};
  int min=hash[arr[0]-'A'];
  for(int i=1;i<4;i++)
  {
   if(min<hash[arr[i]-'A'])
     min=hash[arr[i]-'A']; 
  }
  cout<<min;
	return 0;
}
