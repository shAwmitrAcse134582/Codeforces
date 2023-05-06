#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void check_vowel(string s){
    string s2 ;
    for(int i=0;i<s.length();i++){
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='y' || s[i]=='o' || s[i]=='u'){
        continue;
       }
       else{
        s2+=".";
        s2+=s[i];
       }
    }
    cout<<s2<<endl;

}

int main()
{
fast;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
}
check_vowel(s);
get_out;
}