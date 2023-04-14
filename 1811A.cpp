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
    ll n,d;
    ll s=0;
  		cin>>n>>d;
  		string a;
  		cin>>a;
        bool ok=false;
  		for(ll i=0;i<n;i++){
  			s=a[i]-'0';
  			//cout<<s<<endl;
  			if(s<d && ok==false)
            {
                ok=true;
  				cout<<d;
			}
			cout<<s;
  		}
  		if(ok==false)
         cout<<d;
  		cout<<endl;
}
get_out;
}