#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  ll t; 
  cin>>t;
  ll ans=0;
  while(t--)
  {
  	ll a[3];
  	
  	for(ll i=0;i<3;i++)
  	{
  		cin>>a[i];
  	}
  	// for(ll i=0;i<3;i++)
  	// {
  		// cout<<a[i]<<" ";
  	// }
  	// cout<<endl;
  	// vector<ll>v(3);
  	sort(a,a+3);
  	for(ll i=0;i<3;i++)
  	{
  		if(a[1]==1)
  		ans++;
  		// v[i]=ans;
  		// total+=v[i];
  		
  		
  	}
  	// total+=ans;
  	// for(ll i=0;i<3;i++)
  	// {
  		// total+=v[i];
  	// }
  	
  	
  }
  cout<<ans/3<<endl;

get_out;
}