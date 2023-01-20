#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a;
        b=b+a[0];
        for(int i=1;i<a.size();i=i+2)

            b=b+a[i];


        cout<<b<<endl;
    }
    return 0;
}
