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
int c=0,d=0;
while(t--)
{
    string s;
    cin>>s;
    
    int x=s.size();
    if(s[0]=='+'||s[x-1]=='+')
    c++;
    else
    d++;
   

}
 cout<<(c-d)<<endl;

get_out;
}