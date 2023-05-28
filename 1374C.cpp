#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string s;
        cin>>s;
       stack<char>st;
        int cnt=0;
      for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
            st.push(i);
        else
        {
            if(st.size()==0)
                cnt++;
            else
                st.pop();
        }
            
    }
    cnt+=st.size();
    if(cnt==0){
        cout<<0<<endl;
    }
    else{
    cout<<cnt/2<<endl;
    }
    
    } 
}