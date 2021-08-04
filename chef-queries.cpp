#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll no,l,r,x,y;
    for(int i=0;i<q;i++)
    {
        cin>>no;
        if(no==1)
        {
        cin>>l>>r>>x;
        for(int i=l;i<=r;i++)
        {
        arr[i-1]+=(x+i-l)*(x+i-l);
        }
        }
        else if(no==2)
        {
            cin>>y;
            cout<<arr[y-1]<<endl;
        }
    }
    return 0;
}