#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll c1=0,c2=0;
   for(ll i=0;i<n;i++)
   {
   	if(s[i]=='A')
   	  c1++;
   	  else 
   	  c2++;
   }
   if(c1>c2)
   cout<<"Anton"<<endl;
   else if(c1<c2)
   cout<<"Danik"<<endl;
   else
   cout<<"Friendship"<<endl;
   

get_out;
}