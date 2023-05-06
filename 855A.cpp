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
map<string,bool>mp;
while(t--)
{
   string s;
   cin>>s;
   if(mp[s]==1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   mp[s]=1;
}
get_out;
}