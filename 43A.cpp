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
s[128];
cin>>n;
	for(int i=0; i<n; i++)
    cin>>s[i];
	sort(s.begin(),s.end());
	cout<<s[n/2];
 
get_out;
}