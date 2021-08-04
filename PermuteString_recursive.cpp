#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void Permute(string s, int l ,int r)
{
    if(l==r)
    {
        cout<<s;
        return;
    }
    for(int i=1; i<=r;i++)
    {
        s=swap(s,l,i);
        Permute(s,l+1,r);
        s=Swap(s,l,i);
    }
}
int main()
{
    string s;
    cin>>s; 
    Permute(s,0,s.length()-1);
    return 0;
}