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
  	ll n;
  	cin>>n;
  	string s;
  	cin>>s;
  	bool ok=false;
  	for(ll i=0;i<s.length()-1;i++){
  		if(s[i]==s[i+1]){
  			ok=true;
  			break;
  		}
  		
  	}
  	if(ok==true)
  		cout<<"NO"<<endl;
  		else
  		cout<<"YES"<<endl;
  	
  	
  }

get_out;
}