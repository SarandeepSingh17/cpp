#include<bits/stdc++.h>
using namespace std;
void slidingwindow(int arr[],int size, int k)
{
    deque<int> dq;
    for(int i=0;i<size;i++)
    {
        if(!dq.empty() && dq.front()==i-k)
        {
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()]<arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=k-1)
        {
            cout<<arr[dq.front()]<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    slidingwindow(arr,n,k);
    return 0;
}