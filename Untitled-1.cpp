#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
using namespace std;
void solve()
{
 
 ll n;
  	cin>>n;
  	string s;
  	cin>>s;
  	ll c=0,d=0;
  	for(ll i=0;i<n;i++)
  	{
  		if(s[i]=='U')
  		c++;
  		if(s[i]=='D')
  		c--;
  		if(s[i]=='R')
  		d++;
  		if(s[i]=='L')
  		d--;
  		if(c==1 && d==1)
  		{
  			cout<<"YES"<<endl;
  			return;
  			
  		}
  	}
  	cout<<"NO"<<endl;

}
int main()
{
ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
ll t;
cin>>t;
while(t--)
{

solve();

}
get_out;

}