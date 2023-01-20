#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c1=0,c2=0;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            c1++;
        if(a<b)
            c2++;
    }
    if(c1>c2)
        cout<<"Mishka"<<endl;
    if(c1<c2)
        cout<<"Chris"<<endl;
    if(c1==c2)
        cout<<"Friendship is magic!^^"<<endl;
}
