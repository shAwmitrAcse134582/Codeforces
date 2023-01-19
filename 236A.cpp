#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  
  string s;
  cin>>s;
  set<char>st;
  for(ll i=0;i<s.size();i++)
  {
  	st.insert(s[i]);
  }	
  if(st.size()%2==0){
  	cout<<"CHAT WITH HER!"<<endl;
  }
  else
  cout<<"IGNORE HIM!"<<endl;
  
get_out;
}




