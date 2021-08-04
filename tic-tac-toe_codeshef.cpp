#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int countX=0,countY=0;
        string a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        for(int j=0;j<3;j++)                 //wining condition for all vertical 'X'(s) or 'O'(s) 
            if (a[i]==b[i]==c[i])
            return 1;
    }
    return 0;
}