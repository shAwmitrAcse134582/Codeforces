#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n,m;
cin>>n>>m;
map<string,string>mp;
while(n--){
    string s1,s2;
    cin>>s1>>s2;
    mp[s2]=s1;
}
while(m--){
    string s1,s2;
    cin>>s1>>s2;
    s2.pop_back();
    cout<<s1<<" "<<s2<<"; #"<<mp[s2]<<endl;
}
get_out;
}