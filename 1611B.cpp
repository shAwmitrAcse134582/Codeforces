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
    ll x,y;
    cin>>x>>y;
    if(x==0 || y==0){
        cout<<0<<endl;
    }
    else if(x==y){
        cout<<(x+y)/4<<endl;
    }
    else{
        ll mn=min(x,y);
        ll mx=max(x,y);
        if(mn*3<=mx)
        cout<<mn<<endl;
        else
        cout<<(mn+mx)/4<<endl;
        
    }
}
get_out;
}