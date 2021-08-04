#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int curr_length=1;
    int mx=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]==1)
        {
        curr_length++;
        }
        else
        mx=max(mx,curr_length);
    }
    cout<<mx<<endl;
    return 0;

}