#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


bool check(ll n) {
	// bool ok=false;
  	while(n!=0)
  	{

  		ll x=n%10;
  	

  		if(x!=4 && x!=7)
  		{
  			// ok=true;
  			// cout << x << endl;
  			// break;
  			return false;

  		}
  			n=n/10;
  	}
  	// if(ok==true)
  	// cout<<"NO"<<endl;
	// cout << "HELL" << endl;
  	
  	return  true;

  	
}
int main()
{
  fast;

  	ll n;
  	cin>>n;

  	if(n%4==0 || n%7==0)
  	cout<<"YES"<<endl;
  	else
  	{
  		
  		for(ll i=1;i<=n;i++){
  			if(n%i==0){
  				ll a = n/i;
  				if(check(a)==true){
  					cout << "YES" << endl;
  					return 0;
  				}
  				// check(i)
  			}
  		}
  		cout << "NO" << endl;
  		
  		

	get_out;
	}

}
