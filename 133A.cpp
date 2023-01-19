#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
 string s;
 cin>>s;
 ll x=s.size();
 bool ok=false;
 for(ll i=0;i<x;i++)
 {
 	if(s[i]=='H' || s[i]=='Q'|| s[i]=='9'){
 		ok=true;
 		break;
 	}
 }
 if(ok==true)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;

get_out;
}