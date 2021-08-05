#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char c;
    cin>>c;
    int l=s.length();
    string str;
    for(int i=0;i<l;i++)
    {
        if(s[i]!=c)
        {
            str+=s[i];
        }
    }
    cout<<str<<endl;
    return 0;
}