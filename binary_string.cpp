#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int binarystring(string str,int n)                 //1C0C01A0B1
    {
        int ans=str[0]-'0';
        for(int i=1;i<n-1;i+=2)
        {
            int j=i+1;
            if(str[i]=='C')
            {
                ans=ans ^ (str[j]-'0');
            }
		else if(str[i]=='A')
		{
			ans = ans & (str[j]-'0');
		}
		else if(str[i]=='B')
		{
			ans = ans | (str[j]-'0');
		}
        }
        return ans;
    }

};
int main()
{
    string str;
    cin>>str;
    int l=str.length();
    Solution ob;
    cout<<ob.binarystring(str,l)<<endl;
    return 0;
}