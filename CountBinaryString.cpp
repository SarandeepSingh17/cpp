#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //DP Tabulation Technique
    int dp0[n+1];
    int dp1[n+1];

    //count of length of string ending with zeroes and ones   
    dp0[1]=1;
    dp1[1]=1;      
    

    for(int i=2;i<=n;i++)
    {
        dp1[i]=dp1[i-1]+dp0[i-1];
        dp0[i]=dp1[i-1];
        
        
    }
    cout<<dp1[n]+dp0[n]<<endl;
    return 0;
}