#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solution(int arr[], int size, int k)
{
    long long int count;
    long long int result=1;
    stack<int>st;
     st.push(0);
    for(int i=1;i<size;i++)
    {
        count=1;
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            count=i-st.top()+1;
             result=(result*count)%1000000007;
            st.pop();
        }
       
      
       st.push(i);
    }
    return result;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<solution(arr,n,k)<<endl;
    return 0;
}