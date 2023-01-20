#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[4];
    for(int i=0;i<3;i++)
    {
        cin>>x[i];
    }
    sort(x,x+3);
    cout<<x[2]-x[0];

}
