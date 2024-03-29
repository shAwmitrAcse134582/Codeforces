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
string s;
cin>>s;
ll x=0,y=0;
stack<ll>st1,st2;
vector<ll>v;

for(ll i=0;i<s.size();i++){
    if(s[i]!='B' && (s[i]>='A' && s[i]<='Z')){
     st1.push(i);
    }
    if(s[i]!='b' && (s[i]>='a' && s[i]<='z')){
       st2.push(i);
    }
    if(s[i]=='B'&& !st1.empty()){
        st1.pop();
    }
     if(s[i]=='b'&& !st2.empty()){
        st2.pop();
    }
}
while(!st1.empty()){
    v.pb(st1.top());
    st1.pop();
}
while(!st2.empty()){
    v.pb(st2.top());
    st2.pop();
}
sort(v.begin(),v.end());
for(auto u:v){
    cout<<s[u];
}
cout<<endl;
}
get_out;
}