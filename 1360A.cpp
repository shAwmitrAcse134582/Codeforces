#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c=max(min(a,b)*2,max(a,b));

        cout<<c*c<<endl;
    }

}
