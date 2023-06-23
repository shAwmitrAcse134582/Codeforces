#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
string s1,s2;
cin>>s1>>s2;
ll a=s1.size();
ll b=s2.size();
ll mn=min(a,b);
ll m=mn;
ll mx=max(a,b);
// int i=0,j=0;
// int cnt=0,mx_cnt=0;

// while(mn!=0)
// {
//    if(s1[i]!=s2[j]){
//     cnt=1;
//     // mx_cnt=max(cnt,mx_cnt);
//    }
// //    else{
// //     cnt=0;
// //    }
//    i++;
//    j++;
//    mn--;
// }

if(s1==s2){
    cout<<-1<<endl;
}
else
cout<<mx<<endl;
get_out;
}