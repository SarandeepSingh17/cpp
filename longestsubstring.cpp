#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    multiset<char> st;
    int mx=0;
    int len=0;
    for(int i=0;i<s.length();i++){
        if(st.find(s[i])!=st.end())
        {
            len=st.size();
            st.clear();
            st.emplace(s[i]);
            mx=max(mx,len);
        }
        else
        {
            st.insert(s[i]);
        }
    }
    cout<<mx<<endl;
return 0;
}