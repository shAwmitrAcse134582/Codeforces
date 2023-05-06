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
    string s;
    cin>>s;
    string s2="codeforces";
    ll c=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]!=s2[i]){
             c++;
        }
    }
    cout<<c<<endl;
}
get_out;
}