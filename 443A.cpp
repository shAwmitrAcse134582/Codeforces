#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    gets(s);
    int i,length,count=0;
    length=strlen(s);
    sort(s,s+length);
    for(i=0;i<length;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            count++;
            if(s[i]==s[i+1])
                count--;
        }

    }
    cout<<count<<endl;

}
