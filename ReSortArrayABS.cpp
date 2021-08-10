#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int x, int y)
{
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=0;
    int j=n-1;
    while(i!=j)
    {
        if(abs(arr[i])>=abs(arr[i+1]))
        {
            if(abs(arr[i])>abs(arr[j]))
            {
                swap(arr,i,j);
                j--;
            }
        }
        else
        {
            swap(arr,i,i+1);
            if(abs(arr[i])>abs(arr[j]))
            {
                swap(arr,i,j);
                j--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}