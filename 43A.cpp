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
string s;
map<string,ll>mp;
while(n--)
{
   cin>>s;
   mp[s]++;
}
ll mx=0;
for(auto val:mp){
	if(val.second>mx){
       mx=val.second;   
	}	
}
for(auto val:mp){
	if(mx==val.second){
		cout<<val.first<<endl;
	}
}

 
get_out;
}