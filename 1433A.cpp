#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        cout << (x[0]-'1')*10 + (x.length()*(x.length()+1))/2 << "\n";
    }
}
