#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd( b % a,a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,s=0;
        cin>>k;
        int matrix[2*k+1];
        for(int i=1;i<=2*k;i++)
           s+= gcd(k+(i*i),k+(i+1)*(i+1));
        cout<<s<<endl;
    }

    return 0;
}
