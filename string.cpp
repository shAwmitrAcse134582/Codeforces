#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a' && s[i]=='e' && s[i]=='i' && s[i]=='o' && s[i]=='u')
        {
            i=i+3;
            cout<<" "<<endl;

        }
        else
        {
            cout<<s[i];
        }

    }

}
