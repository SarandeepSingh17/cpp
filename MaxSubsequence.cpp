#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        multimap<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
                mpp.emplace(arr[i],i);
        }
        int c=0;
        for(auto it: mpp)
        {
            if(c<k)
            {
                arr[it.second]*=-1;
                c++;
            }
        }
        int sum = 0;
 
    // Stores the largest element
    // in the array
    int max = *max_element(arr, arr + n);
 
    // Traverse the array
    for (int i = 0; i < n; i++) {
 
        // If a[i] is greater than 0
        if (arr[i] > 0) {
 
            // Update sum
            sum += arr[i];
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}