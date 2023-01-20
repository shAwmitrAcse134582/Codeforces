#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,cnt=0;
    cin>>a;
    string s;
    cin>>s;
    for(int i=0;i<a;i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
