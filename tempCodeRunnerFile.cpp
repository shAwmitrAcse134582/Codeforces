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
    ll mn=min(x,y);
    ll mx=max(x,y);
    if(x==1 && y==1){
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
    }
   else if(x!=y && mx%mn!=0){
    cout<<1<<endl;
    cout<<x<<" "<<y<<endl;
   }
   else{

    cout << 2 << endl;
    cout << x-1 << ' ' << y-1 << endl;
    cout << x << ' ' << y << endl;

    // if(x>=y){
    //     ll a=0,b=0;
    //     while((x-a)%(y-b)==0){
    //         b++;
    //     }
    //     cout << 2 << endl;
    //     cout << a << ' ' << b << endl;
    //     cout << x << ' ' << y << endl;
    // }
    // else if(x<y){
    //     swap(x,y);
    //     ll a=0,b=0;
    //     while((x-a)%(y-b)==0){
    //         b++;
    //     }
    //     cout << 2 << endl;
    //     cout << a << ' ' << b << endl;
    //     cout << y << ' ' << x << endl;
    // }
  
   }
}
get_out;
}