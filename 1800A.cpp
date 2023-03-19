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
  	int n;
  	cin>>n;
  	string s,s1="",str="meow";
  	cin>>s;
  	for(ll i=0;i<n;i++){
  		s[i]=tolower(s[i]);
  		if(s1.empty() or s1.back()!=s[i]){
  			s1.pb(s[i]);
  		}
  	}
  	if(s1==str)
  	cout<<"YES"<<endl;
  	else
  	cout<<"NO"<<endl;
  	
  	
  	
  }

get_out;
}