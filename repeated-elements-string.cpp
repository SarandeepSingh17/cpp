#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cin.ignore();
    transform( str.begin(), str.end(), str.begin(), ::tolower);
    int l=str.length();
    int count[26];
    for(int i=0;i<26;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<l;i++)
    {
        if(str[i]!=' ')
        {
            count[str[i]-'a']++;
        }
    }
    for(int i=0;i<l;i++)
    {
        if(count[str[i]-'a']>1)
        {
            cout<<str[i]<<", count="<<count[str[i]-'a']<<endl;
            count[str[i]-'a']=0;
        }
    }
    return 0;
}