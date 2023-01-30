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
  while(t--)
  {
  	ll x=0;
  	ll n;
  	cin>>n;
  	ll a[n];
  	for(ll i=0;i<n;i++)
  	{
  		cin>>a[i];
  	}
  	ll b[n],c[n];
  	b[0]=a[0];
  	for(ll i=1;i<n;i++){
  		b[i]=b[i-1]+a[i];
  		
  	}
  	c[n-1]=a[n-1];
  	for(ll i=n-2;i>=0;i--){
  		c[i]=c[i+1]+a[i];
  	}
  	for(ll i=0;i<n-1;i++)
  	{
  		x=max(x,__gcd(b[i],c[i+1]));
  	}
  	cout<<x<<endl;
  	
  	
  }

get_out;
}