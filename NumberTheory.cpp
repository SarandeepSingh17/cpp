#include<bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    int ans=1;
    while(b>0)
    {
        if(b%2==0)
        {
            a=a<<1;
            b=b>>1;
        }
        else
        {
            ans=ans*a;
            b--;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    //stores the answer l=8
    
    //cyclicity of 8->4
    int r=n/4;
    string r1=to_string(r);
    int number = power(8,r);
    cout<<number%10<<endl;
    return 0;
}