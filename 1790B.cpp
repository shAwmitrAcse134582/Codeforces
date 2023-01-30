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
  	int n,s,r;
  	cin>>n>>s>>r;
  	ll x=s-r;
  	ll sum=0;
    
  	ll d=r/(n-1);
  	// cout<<d<<" ";
  	for(ll i=0;i<n-2;i++)
  	{
  		cout<<d<<" ";
  		sum+=d;
  	}
  	cout<<s-x-sum<<" ";
  	cout<<x<<endl;
  	 	
  	
  	
  	
  	
  }

get_out;
}