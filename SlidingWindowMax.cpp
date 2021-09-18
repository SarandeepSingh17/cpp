#include<bits/stdc++.h>
using namespace std;
void slidingwindow(int arr[],int n, int k, int x)
{
    // deque<int> dq;
    // for(int i=0;i<size;i++)
    // {
    //     if(!dq.empty() && dq.front()==i-k)
    //     {
    //         dq.pop_front();
    //     }
    //     while(!dq.empty() && arr[dq.back()]<arr[i])
    //     {
    //         dq.pop_back();
    //     }
    //     dq.push_back(i);
    //     if(i>=k-1)
    //     {
    //         cout<<arr[dq.front()]<<endl;
    //     }
    // }
    int sum=0,ans=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    if(sum<x)
    {
        ans=sum;
    }
    for(int i=k;i<n;i++)
    {
        sum=sum-arr[i-k];
        sum+=arr[i];

        if(sum<x)
        {
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int x;
    cin>>x;
    slidingwindow(arr,n,k,x);
    return 0;
}