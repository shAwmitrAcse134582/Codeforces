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
  	for(ll i=2;i<n;i++)
  	{
  		ll m=pow(2,i)-1;
  		if(n%m==0)
  		{
  			cout<<n/m<<endl;
  			break;
  		}
  	}
  	
  	
  }

get_out;
}