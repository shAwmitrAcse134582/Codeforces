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
ll a[2*n];
for(ll i=0;i<2*n;i++){
    cin>>a[i];
}
sort(a,a+2*n);
ll l=0,r=n;
ll sum=0;
ll sum2=0;
for(ll i=0;i<n-1;i++){
    sum+=abs(a[i]-a[i+1]);
    sum2+=abs(a[n+i]-a[n+i+1]);

}
cout<<sum+sum2<<endl;
while(l<n){
    cout<<a[r]<<" "<<a[l]<<endl;
    l++;
    r++;
}
  
}
get_out;
}