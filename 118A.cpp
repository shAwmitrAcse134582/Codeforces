#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  string s,s2;
  cin>>s;
  ll x=s.size();
  
  for(ll i=0;i<x;i++)
  {
  	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            continue;
        }
        else
        {
            s2 += '.';
            s2 += towlower(s[i]);
        }
  }
  cout<<s2<<endl;
  

get_out;
}

