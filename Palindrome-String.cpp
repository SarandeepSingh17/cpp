#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];

    int c=1,j=0;
    int flag=0;
    while(j<n/2)
    {
        if(s[j]==s[n-c])
        {
            flag++;
        }
        c++;
        j++;
    }
    if(flag==j)
    {
    cout<<"Palindrome word"<<endl;
    }
    else
        cout<<"Not palindrome"<<endl;
    return 0;
}