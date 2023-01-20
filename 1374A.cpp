#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,n;
        cin>>a>>b>>n;

        cout<<((n-b)/a)*a+b<<endl;
    }

}
