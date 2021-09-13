#include<bits/stdc++.h>
using namespace std;

bool isfeasible(int mid,int arr[], int n, int k)
{
    int pos=arr[0], elements=1;

    for(int i=1;i<n;i++)
    {
        if(arr[i]-pos>=mid)
        {
            pos=arr[i];
            elements++;
            if(elements == k)
                return true;
        }
    }
    return false;
}

int largestMinDistance(int arr[], int n, int k)
{
    sort(arr,arr+n);
    int res=-1;
    int left=1,right=arr[n-1];

    while(left<right)
    {
        int mid=(left+right)/2;
        if(isfeasible(mid,arr,n,k))
        {
            res=max(res,mid);
            left=mid+1;
        }
        else
        {
            right=mid;
        }
    }

    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<largestMinDistance(arr,n,k)<<endl;
    return 0;
}