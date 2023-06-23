#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll a,b;
cin>>a>>b;
if((a+b)%2==0){
    cout<<a+b+1<<endl;
}
else{
    cout<<a+b-1<<endl;
}
get_out;
}