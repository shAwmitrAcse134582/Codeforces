#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n;
cin>>n;
vector<ll>v(n);
map<ll,ll>mp;
for(ll i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}
ll c=INT_MIN;
for(int i=0;i<n;i++){
    c=max(c,mp[v[i]]);
}
cout<<c<<endl;

get_out;
}
