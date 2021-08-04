#include<iostream>
#include<string>
using namespace std;
void powerset(string s, int i, string cur)
{
    if(i==s.length())
    {
        cout<<cur<<" ";
        return;
    }
    powerset(s,i+1,cur+s[i]);
    powerset(s,i+1,cur);
}
int main()
{
    string s;
    cin>>s; 
    powerset(s,0,s);
    return 0;
}