#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
string lcm(string a,string b)
{
   string x = a, y = b;
    while (x.length() != y.length()) {
        if (x.length() < y.length())
            x += a;
        else
            y += b;
    }

    if (x == y)
        return x;
        else{
            return "";
        }
   
}
int main()
{
fast;
ll t;
cin>>t;
while(t--)
{
   string s1,s2;
   cin>>s1>>s2;
   string ans=lcm(s1,s2);
   if(ans!=""){
    cout<<ans<<endl;
   }
   else{
    cout<<-1<<endl;
   }
}
get_out;
}