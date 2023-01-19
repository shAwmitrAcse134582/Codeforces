#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  ll n,sum=0,sum2=0;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++)
  {
  	cin>>a[i];
  	sum+=a[i];
  }
  ll x=sum/2;
  sort(a,a+n);
  ll c=0;
 for(ll i=n-1;i>=0;i--)
 {
 	sum2+=a[i];
 	c++;
 	if(sum2>x)
 	break;
 	
 }
 cout<<c<<endl;
 

get_out;
}