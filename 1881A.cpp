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
    ll n,m;
    cin>>n>>m;
  string x,s;
  cin>>x>>s;
  bool ok=false;
  ll cnt=0;
  for(ll i=0;i<10;i++){
    if(x.find(s)!=-1){
        ok=true;
        break;
    }
    cnt++;
    x+=x;
  }
  if(ok){
    cout<<cnt<<endl;
  }
  else{
    cout<<-1<<endl;
  }
 
    
}
get_out;
}