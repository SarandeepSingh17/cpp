#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
    int sum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)     //KADANE's Algorithm
    {
        sum=sum+arr[i];
        if(sum<0)
        {
            sum=0;
        }
        mx=max(mx,sum);
    }
    return mx;
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
    int non_circular;
    int circular;
    non_circular=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    circular=totalsum+kadane(a,n);
    cout<<max(circular,non_circular)<<endl;    
    return 0;
}