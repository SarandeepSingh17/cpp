#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,ans;
    std::cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    cout<<m<<endl; 
    return 0;
}