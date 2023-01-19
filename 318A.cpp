#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  ll n,m,x;
  cin>>n>>m;
  vector<ll>v;
 
  for(ll i=1;i<=n;i+=2)
  {
   v.pb(i);
   
  }


  
  
  	for(ll i=2;i<=n;i+=2)
  {
  	v.pb(i);
  	
  }
    cout<<v[m-1]<<endl;
  	
  
 
  
  
  

get_out;
}