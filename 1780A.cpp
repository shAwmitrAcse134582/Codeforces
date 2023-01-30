
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
  	ll x;
        cin>>x;
        ll a[x];
        ll c=0,d=0;
        for(ll i=0;i<x;i++){
            cin>>a[i];
            if(a[i]%2==1)c++;
            else d++;
        }
        
        
        if((x==3 && c==2 && d==1) || c==0  ){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        if(c>=3){
            ll cnt=0;
            for(ll i=0;i<x;i++){
            if(a[i]%2==1){
                cnt++;
                cout << i+1 << ' ';
                if(cnt==3)
                    break;
             }
            }
            cout << endl;
            
        }
        else if(c>=1){
            for(ll i=0;i<x;i++){
                if(a[i]%2==1){
                    cout << i+1 << ' ';
                    break;
                 }
            }
            
            ll cnt2 = 0;
            for(ll i=0;i<x;i++){
                if(a[i]%2==0){
                    cnt2++;
                    cout << i+1 << ' ';
                    if(cnt2==2)
                        break;
                 }
            }
            cout << endl;
        }

  }

get_out;
}
