#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  	
  
  	  ll k,n,w;
  	  cin>>k>>n>>w;
  	  ll p=0;
  	  for(ll i=1;i<=w;i++)
  	  {
  	  	p+=i*k;
  	  }
  	ll x=p-n;
  	if(x>0)
  	cout<<x<<endl;
  	else
  	cout<<0<<endl;
  		
      	
     		
get_out;
}




