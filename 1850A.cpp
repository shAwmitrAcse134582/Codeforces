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
  ll a[3];
  for(ll i=0;i<3;i++){
    cin>>a[i];
  }
  sort(a,a+3);
  if(a[1]+a[2]>=10){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
get_out;
}