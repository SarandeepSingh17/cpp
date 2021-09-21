#include<bits/stdc++.h>
using namespace std;

//number formed from subarray with size k divisible by 3
void computeNumberfromSubarray(vector<int> arr, int k)
{
    pair<int,int> ans;
    int sum=0;
    bool found = false;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    if(sum%3==0)
    {
        ans=make_pair(0,k-1);
        found=true;
    }

    for(int j=k;j<arr.size();j++)
    {
        if(found)
            break;
        sum = sum+arr[j]-arr[j-k]; //sliding window technique
        if(sum%3==0)
        {
            ans = make_pair(j-k+1, j);
            found=true;
        }  
    }
    if(!found)
    {
        ans=make_pair(-1,0);
    }
    if(ans.first == -1)
        cout<<"No such subarray exists"<<endl;
    else
    {
        for(int i=ans.first;i<=ans.second;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<int> arr ={84,23,45,56,12,82};
    computeNumberfromSubarray(arr,3);
    return 0;
}