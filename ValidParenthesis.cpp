#include<bits/stdc++.h>
using namespace std;
bool valid(string s)
{
    stack<char> st;
    if(s.length()==1)
    {
        return false;
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        { 
            if(st.empty())                    //condition to check if first brace is closing
            {
                return false;
            }
        else if(s[i]==')' && st.top()=='(')
        {
            st.pop();
        }
        else if(s[i]=='}' && st.top()=='{')
        {
            st.pop();
        }
        else if(s[i]==']' && st.top()=='[')
        {
            st.pop();
        }
}
    }
    if(st.empty())
        return true;
    return false;
}
int main()
{
    string s;
    cin>>s;
    cout<<valid(s)<<endl;
    return 0;
}