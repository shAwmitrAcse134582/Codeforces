#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  	
  	string s,s1;
  	cin>>s;
  	ll x=s.size()/2;
  	sort(s.begin(),s.end());
  	// cout<<s<<endl;
     		for(ll i=x;i<s.size();i++)
     		{
     			if(i==s.size()-1)
     			cout<<s[i];
     			else
     			cout<<s[i]<<'+';
     			
     		}
     		
     		
     		
     		
get_out;
}




