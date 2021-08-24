#include<bits/stdc++.h>
using namespace std;
int findmaxconsecutiveOnes(vector<int> arr,int k)
{
    int mx=0,count1=0,count0=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
            count1++;
        else if(count0<k)
        {
            count0++;
        }
        else
        {
            count0=0;
            count1=1;
        }
        mx=max(mx,count1+count0);
    }
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findmaxconsecutiveOnes(arr,k)<<endl;
    return 0;
}