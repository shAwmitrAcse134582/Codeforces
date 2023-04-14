#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n,i=1;
cin>>n;
ll x=n/2;
while(i<x){
    n/=2;
    i++;
}
cout<<n<<endl;

get_out;
}