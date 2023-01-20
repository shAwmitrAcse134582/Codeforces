#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int capacity=0,stillnow=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        stillnow=stillnow-a;
        stillnow=stillnow+b;
        capacity=max(capacity,stillnow);

    }
    cout<<capacity;
}
