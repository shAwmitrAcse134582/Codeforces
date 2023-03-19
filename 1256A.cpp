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
  	ll a,b,n,s;
  	cin>>a>>b>>n>>s;
  	if(s%n<=b && a*n+b>=s)
  	cout<<"YES"<<endl;
  	else
  	cout<<"NO"<<endl;
  	
  	
  }

get_out;
}