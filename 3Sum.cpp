#include<bits/stdc++.h>
using namespace std;
// bool check3Sum(int arr[], int n,int k){
//     sort(arr,arr+n);
    
//     for(int i=0;i<n;i++)
//     {
//     int lo=i+1;
//      int hi=n-1;
//      while(lo<hi)
//      {
//          int sum=arr[i]+arr[lo]+arr[hi];
//          if(sum==k)
//          {
//              return true;
//          }
//         if(sum<k)
//         {
//             lo++;
//         }
//         else{
//             hi--;
//         }
//      }
//     }
//     return false;
// }
void threeSum(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            int lo=i+1;
            int hi=nums.size()-1;
            while(lo<hi)
            {
            int curr=nums[i]+nums[lo]+nums[hi];
            if(curr==0)
            {
                vector<int> list;
                list.push_back(nums[i]);
                list.push_back(nums[lo]);
                list.push_back(nums[hi]);
                ans.push_back(list);
                continue;
            }
            if(curr>0)
                hi--;
            else
                lo++;
            } 
        }
          for(int i=0;i<ans.size();i++)
        {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        }
    }
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    threeSum(arr);
    // if(check3Sum(arr,n,target))
    // {
    //     cout<<"True"<<endl;
    // }
    // else{
    //     cout<<"False"<<endl;
    // }
    return 0;
}