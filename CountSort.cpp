#include<iostream>
using namespace std;
void countsort(int arr[], int n)
{
    int mx=arr[0];
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
    }
    int count[10]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<=mx;i++)
    {
        count[i]+=count[i-1];
    }
    int a[n];
    for(int i=n-1;i>=0;i--)
    {
        a[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
}
//Driver Code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    countsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}