#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  	
  	ll n;
  	cin>>n;
  	ll a[n];
  	ll s=0;
  	for(ll i=0;i<n;i++)
  	{
  		cin>>a[i];
  		s+=a[i];
  	}
  	 
     		double ans=(float) s/n;
     		cout<<fixed<<setprecision(12)<<ans<<endl;
     		
get_out;
}




