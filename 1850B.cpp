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
   ll mx=0;
   ll ans;
   ll c=0;
  for(int i=1;i<=n;i++){
    ll a,b;
    cin>>a>>b;
      c++;
    if(a<=10 && b>mx){
        // cout<<a<<" "<<b<<endl;
        ans=c;
         mx=max(mx,b);
        
    }
 
   

  }
  cout<<ans<<endl;
   
}
get_out;
}