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
  	string s;
  	cin>>s;
  	ll cnt=0;
  	string pi="314159265358979323846264338327";
  	for(ll i=0;i<s.size();i++){
  		if(s[i]==pi[i])
  		cnt++;
  		else
  		break;
  	}
  	cout<<cnt<<endl;
  	
  }

get_out;
}