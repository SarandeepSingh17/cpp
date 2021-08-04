#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
string countAndSay(int n) {

    if(n==1)
    {
        return "1";
    }
    string s=countAndSay(n-1);
    string str="";
    int l= s.length();
    int k=1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
            k++;
        else
        {
            str+=k+'0';
            str+=s[i];
            k=1;
        }
    }
    return str;
    // string str = "1";
    // if(n==1)
    //     return str;
    
    // for(int i=2;i<=n;i++)
    // {
    //     string output = "";
    //     int count = 1;
    //     int j  = 0;
    //     while(j<str.length()-1)
    //     {
    //         if(str[j]==str[j+1])
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             output.push_back(char('0'+count));
    //             output.push_back(str[j]);
    //             count = 1;
    //         }
    //         j++;
    //     }
    //     output.push_back(char('0'+count));
    //     output.push_back(str[j]);
        
    //     str = output;
    // }
    // return str;
    //---------------------------------------


    /* Using Recursion*/
    
    
}
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.countAndSay(n)<<endl;
    }
    return 0;
}