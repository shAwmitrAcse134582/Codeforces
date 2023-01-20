#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[5],c=0;
    string s;
    cin>>n[1]>>n[2]>>n[3]>>n[4]>>s;
    for(int i=0;i<s.size();i++)
    {
        c+=n[s[i]-'0'];
    }
    cout<<c<<endl;

}
