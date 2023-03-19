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
  	ll x;
  	cin>>x;
  	ll a[x];
  	vector<ll>v;
  	ll s=0;
  	bool ok=false;
  	for(ll i=0;i<x;i++)
  	{
  		cin>>a[i];
  	}
  	sort(a,a+x);
  	if(a[0]>1){
  		cout<<"NO"<<endl;
  		continue;
  	}
  	for(ll i=0;i+1<x;i++){
  		s+=a[i];
  		v.pb(s);
  	}
  	for(ll i=0;i+1<x;i++){
  		if(v[i]<a[i+1]){
  			ok=true;
  			break;
  		}
  	}
  	if(ok)
  		cout<<"NO"<<endl;
  		else
  		cout<<"YES"<<endl;
  	
  	
  	
  }

get_out;
}