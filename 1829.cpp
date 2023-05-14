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
    ll mn=INT_MAX;
    ll mn1=INT_MAX;
    ll mn2=INT_MAX;

    for(int i=0;i<n;i++)
    {
        ll x;
        string s;
        cin>>x>>s;
         string a="11";
        string b="10";
        string c="01";
       if(s==a){
        mn=min(mn,x);
       }
       else if(s==b)
        {
        mn1=min(mn1,x);
       }
       else if(s==c){
        mn2=min(mn2,x);
       }   
}
     int ans=min(mn,mn1+mn2);
     if(ans>=INT_MAX)
     cout<<-1<<endl;
     else{
        cout<<ans<<endl;
     }

 }
    

get_out;
}