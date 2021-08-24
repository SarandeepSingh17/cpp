#include<bits/stdc++.h>
using namespace std;
int findmaxconsecutiveOnes(vector<int> arr,int k)
{
    int mx=0,start=0,count0=0;
    for(int end=0;end<arr.size();end++)
    {
        if(arr[end]==0)
            count0++;
        while(count0>k)
        {
            if(arr[start]==0)
                count0--;
            start++;
        }
        mx=max(mx,end-start+1);
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
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<findmaxconsecutiveOnes(arr,k)<<endl;
    return 0;
}