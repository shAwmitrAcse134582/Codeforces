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
vector<pair<string,string>>v(t);
while(t--)
{
   string s1,s2;
   cin>>s1>>s2;
   v.push_back(make_pair(s1,s2));
}
      sort(v.begin(),v.end());
       int ans=unique(v.begin(),v.end())-v.begin();
        cout<<ans-1<<endl;
get_out;
}