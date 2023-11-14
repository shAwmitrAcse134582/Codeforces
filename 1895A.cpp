#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n,m,k;
cin>>n>>m>>k;
ll x,y;
// if(abs(n-m)<=k){
//  if(n<m){
//     x=n+k;
//     y=abs(m-x)*2;
//     cout<<x+y<<endl;
// }   
// else if(n>m){
//     x=n-k;//10,0
//     ll b=abs(x-m);//5
//     y=m+b;
//     cout<<y<<endl;

// }

// }
// else{
//     cout<<max(n,m)<<endl;
// }
if(n>m){
cout<<n<<endl;
    
}
else{
    if(m-n>k){
       
         cout<<(2*m-(n+k))<<endl;
    }
    else{
        cout<<m<<endl;
    }
}
}
get_out;
}