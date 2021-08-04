#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int size)
{
int curr_max=arr[0];
int highest_max=arr[0];
for (int i=1;i<size;i++)
{
    curr_max=max(arr[i],curr_max+arr[i]);
    highest_max=max(highest_max,curr_max);
}
return highest_max;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=kadane(a,n);
    cout<<ans<<endl;
    return 0;
}