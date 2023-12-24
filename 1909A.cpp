#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;

bool isPalindrom(string x)
{
    int i = 0;
    int j = x.size() -1;
    while(i < j)
    {
        if(x[i] != x[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool isEven(ll n)
{
    return n % 2 == 0;
}
bool isOdd(ll n)
{
    return n % 2 != 0;
}
bool isPrime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}
ll gcd(ll a, ll b)
{
    if(a < b) swap(a, b);
    ll ans;
    int rem = 1;
    while(true)
    {
        rem = a % b;
        if(rem == 0) 
        {
            ans = b;
            break;
        }
        a = b;
        b = rem;
    }
    return ans;
}
vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    for(ll i = 2; i * i <= n; i++)
    {
        ll cnt = 0;
        while(n % i == 0)
        {
            cnt++;
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}
ll digitSum(ll n)
{
    ll sum = 0;
       string num = to_string(n);
       for(int i = 0; i < num.size(); i++)
       {
           sum += (num[i] - '0');
    }
    return sum;
}
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
  vector<char>v,v2;
  ll c=0,d=0,e=0,f=0;
while(n--){
    ll a,b;
    cin>>a>>b;
  
    // v1.pb(a);
    // v2.pb(b);
    
    // if(a>=0 && b<0)c++;
    // if(a>0 && b>0)d++;
    // if(a<0 && b<0)e++;
    // if(a<0 && b>=0 )f++;
    if(a>0)v.pb('r');
    if(a<0)v.pb('l');
    if(b>0)v.pb('u');
    if(b<0)v.pb('d');
}
sort(v.begin(),v.end());
ll un=unique(v.begin(),v.end())-v.begin();
if(un==4)no;
else yes;
// if(c && d && e && f)no;
// else yes;
// if(c+f>3)no;
// else yes;
// string s=" ";
// for(ll i=0;i<v1.size()-1;i++){
//     if(v1[i+1]>v1[i]){
//         s+="r";
//     }
//     else if(v1[i]>v1[i+1]){
//         s+="l";
//     }
// }
// for(ll i=0;i<v2.size()-1;i++){
//     if(v2[i+1]>v2[i]){
//         s+="u";
//     }
//     else if(v2[i]>v2[i+1]){
//         s+="d";
//     }
// }
// cout<<s<<endl;

    
}
get_out;
}