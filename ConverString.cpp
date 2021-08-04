#include<bits/stdc++.h>
using namespace std;
string convertString(string str) 
{
    // WRITE YOUR CODE HERE
    string st;
    if(islower(str[0]))
    {
        st+=str[0]-32;
    }
    else
    {
        st+=str[0];
    }
    for(int i=1;i<str.length();i++)
    {
        st+=str[i];
        if(str[i]==' ')
        {
        if(str[i+1]>='a' && str[i+1]<='z')
        {
            st+=str[i+1]-32;
            i+=1;
        } 
        }
    }
    return st;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout<<convertString(str)<<endl;
    }
    return 0;
}