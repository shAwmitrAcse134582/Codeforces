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
    ll c=0;
    int x=s.size();
    for(ll i=0;i<x;i++){
        if(s[i]=='_'&& s[i+1]=='_'){
            c++;
        }
        
    }
    cout<<c<<endl;
}
get_out;
}