#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
   cin>>a[i]; 
   
}   
ll ans=1;
sort(a,a+n);
a[0]=a[0]+1;
for(ll i=0;i<n;i++){
  ans*=a[i];
}
cout<<ans<<endl;
}
get_out;
}