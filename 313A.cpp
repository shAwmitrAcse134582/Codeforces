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
  ll temp=n;
  string s=to_string(temp);
  ll l=s.length()-2;
 
  if(n>0)
  cout<<n<<endl;
  else{
  	ll x=-(n%10);
  	ll y=-(n%100);
  	if(x>y){
  		// cout<<n+x<<endl;
  		s.erase(l,1);
  		cout<<s<<endl;
  		
  	}
  	
  	else{
  		
  		// s.pop_back();
  		// cout<<s<<endl;
  		s.pop_back();
  		cout<<s<<endl;
  		
  	}
  	
  }

get_out;
}