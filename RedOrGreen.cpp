#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
int count(int N,string str)
{
    int j=0;
    int count_red=0;
    int count_green=0;
    while(j<=N-1)
    {
    if(str[j]=='R')
        count_red++;
    else
    count_green++;
    j++;
    }
    if(count_red>count_green)
        return count_green;
    else
        return count_red;
}
};
int main()
{
 int n;
 cin>>n;
 string str;
 cin>>str;
 Solution ob;
 cout<<ob.count(n,str)<<endl;   
}