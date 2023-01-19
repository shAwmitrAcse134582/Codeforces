#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
using namespace std;

int main()
{
 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);

 int n,m;                   
  cin>>n>>m;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
 
    vector<ll> pref(n+2,0);
    vector<ll> suff(n+2,0);
 
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1];
        if(a[i]<a[i-1]){
            pref[i]+=(a[i-1]-a[i]);
        }
    }
    for(int i=n;i>=1;i--){
        suff[i]=suff[i+1];
        if(a[i]<a[i+1]){
            suff[i]+=(a[i+1]-a[i]);
        }
    }
 
    while(m--){
        int x,y;              
      cin>>x>>y;
        ll ans;
        if(x>y){
            ans=suff[y]-suff[x];
        }
        else{
            ans=pref[y]-pref[x];
        }
 
        cout<<ans<<endl;
    }

		
	
get_out;

}
