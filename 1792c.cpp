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
 ll c=s.size();
 ll a=0,b=n-1;
 while(a<=b){
 	if((s[a]=='0'&& s[b]=='1') || (s[a]=='1' && s[b]=='0'))
 	{
 		c=c-2;
 		a++;
 		b--;
 	}
 	else{
 		cout<<c<<endl;
 		return;
 	}
 }
 cout<<c<<endl;

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