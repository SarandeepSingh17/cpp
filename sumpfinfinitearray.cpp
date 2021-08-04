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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int q;
        cin>>q;
        for(int i=1;i<=q;i++)
        {
            int l,r;
            cin>>l>>r;
            int sum=0;
            for(int j=l;j<=r;j++)
            {
                sum+=arr[(j-1)%n];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}