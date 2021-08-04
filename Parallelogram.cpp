#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<i;k++)
            {
               std::cout<<" ";
            }
        for(int j=1;j<=n;j++)
        {
            std::cout<<"*"<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}