#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  a,b,c;
    cin>>a>>b>>c;
   int mn=min(a,b);
   if(a==b && b==c || (a==b && a!=c))
    cout<<2*c+a+b<<endl;
    else
   cout<<2*c+mn+mn+1<<endl;
}
