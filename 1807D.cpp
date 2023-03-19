#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


int main(){
    fast;
    ll t; 
    cin>>t;
    while(t--){
       ll a,b;
    
     cin>>a>>b;
     
    vector<ll>v(a),p(a,0);
    ll s=0;
    
    for(ll i=0; i<a; i++){
        cin>>v[i];
        
        s+=v[i];
    }
    p[0]=v[0];
    
    for(ll i=1; i<a; i++){
    	
    	p[i]=v[i]+p[i-1];
    }
     
     
   while(b--){
   	
        ll l,r,k; 
        cin>>l>>r>>k;
        ll d=p[r-1]-(p[l-1]-v[l-1]);
        
        ll m=s-d+(r-l+1)*k;
        if(m%2==0)
         cout<<"NO"<<endl;
         
        else
        cout<<"YES"<<endl;
        
    }
    
    }
    get_out;
}