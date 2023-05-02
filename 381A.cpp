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
vector<ll>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
ll s=0,d=0,f=0;
while(!v.empty()){
   if(f==0){
    if(v[0]>v.back()){
        s+=v[0];
        v.erase(v.begin());
    }
    else{
        s+=v.back();
        v.pop_back();
    }
     f=1;
   }
   else{
    if(v[0]>v.back()){
        d+=v[0];
        v.erase(v.begin());
    }
    else{
        d+=v.back();
        v.pop_back();
    }
    f=0;
   }
  
}
cout<<s<<" "<<d<<endl;
get_out;
}