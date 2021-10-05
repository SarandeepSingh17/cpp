#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int bits=0;
        int n1=n;
        while(n>0)
        {
            bits++;
            n=n>>1;    
        }
        int curr_setbits;
        if(n1%2==0)
        {
            curr_setbits=pow(2,bits-1)-pow(2,bits-2);
        }
        else
        {
            curr_setbits= n1 - pow(2,bits-1) + 1;
        }
            cout<<curr_setbits<<endl;
    }
    return 0;
}