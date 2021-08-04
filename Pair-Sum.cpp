#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[], int n, int k)
{
    int low=0,high=n-1;
    while(low<high)
    {
    if(arr[low]+arr[high]==k)
    {
    cout<<low<<" "<<high<<endl;
    return true;
    }
    else if(arr[low]+arr[high]<k)
    low++;
    else 
    high--;
    }
    return false;
}
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    cout<<pairsum(a,n,k)<<endl;
    return 0;
}