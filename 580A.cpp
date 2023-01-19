#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
 ll n;
 cin>>n;
 ll a[n];
 ll c=0;
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 ll mx=0;
 for(ll i=0;i<n;i++)
 {
 	if(a[i]>=a[i-1] )
 	c++;
 	else
 	c=1;
 	 mx=max(mx,c);
 }
 //cout<<c<<endl;
 cout<<mx<<endl;
 

get_out;
}