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
   ll a[n];
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a,a+n);
   ll l=0;
   ll r=n-1;
   ll sum=0;
   while(l<=r){
      sum+=a[r]-a[l];
      l++;
      r--;
   }
   cout<<sum<<endl;
}
get_out;
}