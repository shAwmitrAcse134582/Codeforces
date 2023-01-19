#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  string s;
  cin>>s;
 string st="hello";
 ll c1=0,c2=0;
 
  for(ll i=0;i<s.size();i++)
  {
  if(s[i]==st[c1])
  {
  	c1++;
  	c2++;
  }
  		
  }
  if(c2==5)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

get_out;
}