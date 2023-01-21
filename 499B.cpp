#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  ll n,m;
  cin>>n>>m;
  string s1,s2;
  map<string,string>mp;
  while(m--){
  	
  	cin>>s1>>s2;
  	if(s1.size()<=s2.size())
  	mp[s1]=s1;
  	else
  	mp[s1]=s2;
  	//cout<<s1<<' '<<s2<<endl;
  }
  while(n--){
  
  	cin>>s1;
  	cout<<mp[s1]<<" ";
  }
 cout<<endl; 
get_out;
}