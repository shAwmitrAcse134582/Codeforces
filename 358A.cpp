#include <iostream>
int n,s,m,i,k;
using namespace std;
int main()
{


    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>k;
        if (m<k)
            m=k;
        s=s+k;
    }
    cout<<m*n-s<<endl;
}
