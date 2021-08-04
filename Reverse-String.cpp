#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    string reverse(string str)
    {
    string temp = " ";
    for(int i=str.length()-1;i>=0;i--)
    {
        temp.push_back(str[i]);
    }
    return temp;
    }
};
int main()
{
    string str;
    cin>>str;
    Solution ob;
    cout<<ob.reverse(str)<<endl;
    return 0;
}