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
  	ll n;
  	cin>>n;
  	ll x=n*(n-1) % 1000000007;
  	ll fact=1;
  	for(ll i=n;i>=1;i--){
  		fact=(fact*i)%1000000007;
  	}
  	cout<<(fact*x)%1000000007<<endl;
  	
  }

get_out;
}