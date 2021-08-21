#include<bits/stdc++.h>
using namespace std;
void Permutation(int n, vector<int> arr)
{
    if(n==1)
    {
        for(int k=0;k<n;k++)
        {
        cout<<arr[k]<<" ";
        }
    }
    int i=0;
    for(i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        break;
    }
    if(i!=0)
    {
    for(int j=n-1;j>=i;j--)
    {
        if(arr[i-1]<arr[j])
        {
            swap(arr[i-1],arr[j]);
            break;
        }
    }
    }
    reverse(arr.begin()+i,arr.end());
    for(int k=0;k<n;k++)
    {
    cout<<arr[k]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Permutation(n,arr);
   return 0;
}
