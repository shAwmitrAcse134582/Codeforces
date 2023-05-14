#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n;
cin>>n;
vector<pair<string,string>>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}
sort(v.begin(),v.end());
int ans=unique(v.begin(),v.end())-v.begin();
cout<<ans<<endl;

get_out;
}