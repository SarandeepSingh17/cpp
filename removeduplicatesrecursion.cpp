#include<bits/stdc++.h>
using namespace std;
string remdup(string s)
{
    if(s.length() == 0)
{
        return "";
    }
    string res;       
    if(s[0]!=s[1])    
    {
        res += s[0];  
        cout<<res;   
        remdup(s.substr(1));  
    }
    if(s[1] && s[0]==s[1])  
    {
            remdup(s.substr(1));  
    }
}
int main()
{
    string s = "aaaabbbbeecdddd";
    remdup(s);
    return 0;
}