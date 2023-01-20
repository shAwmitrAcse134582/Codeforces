#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l,count=0;
    cin>>l;
    for(int i=0;i<l;i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<l;i++)
    {
       if(s[i]!=s[i+1])
            count++;
    }
    if(count==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
