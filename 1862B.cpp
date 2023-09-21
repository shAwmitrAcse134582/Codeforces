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
vector<ll>v;

for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}
// cout<<v[0]<<endl;
vector<ll>v2;
v2.push_back(v[0]);
for(int i=1;i<v.size();i++){
    if(v[i]<v[i-1]){
          v2.push_back(1);
           v2.push_back(v[i]);
    }
    else{
        v2.push_back(v[i]);
    }  
}
cout<<v2.size()<<endl;
for(auto val: v2){
    cout<<val<<" ";
}
cout<<endl;

}
get_out;
}