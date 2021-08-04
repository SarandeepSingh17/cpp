#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array"<<endl;
    
    for(i=0;i<n;i++)
        cin>>a[i];
    int pd=a[1]-a[0];
    int ans=2;
    int curr=2;
    for(i=2;i<n;i++)
    {
        if(pd==a[i]-a[i-1])
        {
            curr++;
        }
        else
        {
            pd=a[i]-a[i-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
    return 0;
}