#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
 
  
  ll a,b,c;
  cin>>a>>b>>c;
  ll p=a+b+c;
  ll q=a*b*c;
  ll r=(a+b)*c;
  ll s=(b+c)*a;
  ll x=max(p,q);
  ll y=max(r,s);
  cout<<max(x,y)<<endl;

get_out;
}