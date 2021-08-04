#include<bits/stdc++.h>
using namespace std;
int  dec(int n)
{
    if(n==1)
    {
        return 1;
    }
    cout<<n<<endl;
    dec(n-1);
}
int  inc(int n)
{
    if(n==1)
    {
        return 1;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    cout<<inc(n)<<endl;
    return 0;
}