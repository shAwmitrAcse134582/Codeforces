#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
    string s;
cin>>s;
if(s =="abc"){
    yes;
}
else if(s=="acb"){
yes;    
}
else if(s=="bac")
{
    yes;
}
else if(s=="bca"){
    no;
}
else if(s=="cab"){
    no;
}
else if(s=="cba"){
    yes;
}
}
get_out;
}