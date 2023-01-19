#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
using namespace std;
void solve()
{
 
ll n;
  	cin>>n;
  	ll a[n];
  	map<ll,ll>mp;
  	for(ll i=0;i<n;i++)
  	{
  		cin>>a[i];
  		mp[a[i]]++;
  		
  	}
  	if(mp.size()==1){
  		cout<<"NO"<<endl;
  		return;
  		
  	}
  	// if(n==2 && a[0]==a[1]){
  		// cout<<"NO"<<endl;
  	// }
  	sort(a,a+n);
  	reverse(a,a+n);
  	
  	cout<<"YES"<<endl;
  	// if(a[0]==a[1])
  	// {
  		// swap(a[1],a[n-1]);
  	// }
  	for(auto val:a)
  	{
  		cout<<val<<" ";
  	}
  	cout<<endl;
  	
}
int main()
{
ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
ll t;
cin>>t;
while(t--)
{

solve();

}
get_out;
}
	
  



