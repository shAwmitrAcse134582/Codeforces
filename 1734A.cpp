#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
using namespace std;
void solve()
{
 ll n;
 cin>>n;
 ll a[n];
 for(ll i=0;i<n;i++)
 {
     cin>>a[i];
 }
 sort(a,a+n);
 ll ans=INT_MAX;
 for(ll i=1;i<n-1;i++)
 {

         ll x=a[i]-a[i-1] + a[i+1]-a[i];
         ans=min(ans,x);

 }
 cout<<ans<<endl;

}
int main()
{
ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

ll t;
cin>>t;
while(t--)
{

solve();

}
get_out;

}
