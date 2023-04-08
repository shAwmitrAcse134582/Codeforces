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
    ll n,m;
    cin>>n>>m;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    // if((a!=1&&a!=m)&&(b!=1&&b!=m)&&(c!=1&& c!=8)&&(d!=1&&d!=8))
    // cout<<4<<endl;
    // else if((a==1||a==8)&&(b==1||b==8)||((c==1||c==8)&&(d==1||d==8)))
    // cout<<2<<endl;
    // else
    // cout<<3<<endl;
    if((a==1&&b==1)||(c==1&&d==1)||((a==n&&b==1))||(c==n&&d==1)||(a==1&&b==m)||(c==1&&d==m)||(a==n&&b==m)||(c==n&&d==m))
    cout<<2<<endl;
    else if((a==1||b==1)||(c==1||d==1)||((a==n||b==1))||(c==n||d==1)||(a==1||b==m)||(c==1||d==m)||(a==n||b==m)||(c==n||d==m))
    cout<<3<<endl;
     else 
     cout<<4<<endl;
        
    
}
get_out;
}