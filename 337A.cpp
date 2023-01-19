#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
 ll n,m;
 cin>>n>>m;
 ll a[m];
 for(ll i=0;i<m;i++)
 {
 	cin>>a[i];
 }
 sort(a,a+m);
 ll mx=INT_MAX;
 for(ll i=0;i+n-1<m;i++)
 {
 	ll x=a[i+n-1]-a[i];
 	mx=min(mx,x);
 }
 cout<<mx<<endl;

get_out;
}