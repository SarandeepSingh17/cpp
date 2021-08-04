#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        string s;
        cin>>s;
        int n=s.size(),mid=n/2;
        int hash[26]={0};
        bool lap=true;
        for(int j=0;j<mid;j++) //Checking first half of String
        {
            int x=s[j]-'a';// Example: 98-97=1 1='b' 
            hash[x]++;//increase the occurence of character in string
        }
        if(n%2!=0)
            mid+=1;
            for(int j=mid;j<n;j++)//Checking Second half of String
            {
                int x=s[j]-'a';// Example: 98-97=1 1='b' 
            hash[x]--;
            }
            for(int j=0;j<26;j++)
            {
                if(hash[j]!=0)
                {
                    lap=false;
                    break;
                }
            }
            if(lap)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
    }
    return 0;
}