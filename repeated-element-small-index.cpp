#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     int N=1e6;
    int idx[N];                 //index-array
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }                //initializing array with -1
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[a[i]]!=-1)
        {
            minidx=min(minidx,idx[a[i]]);
        }
        else
        {
        idx[a[i]]=-1;
        }
    }
    cout<<minidx+1<<endl;
    return 0;
}