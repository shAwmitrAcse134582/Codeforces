#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
 string s;
    cin >> s;
 
    while(~s.find("WUB")){
        s.replace(s.find("WUB"), 3, " ");
    }
    cout << s << endl;
 	
 

get_out;
}