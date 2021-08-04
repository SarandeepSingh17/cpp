#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int l,int k)
{
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<arr[k-1]<<endl;
}
void display(int arr[],int n)
{
    for(int j=0;j<n;j++)
        cout<<arr[j]<<"\t";
    cout<<endl;
}
//Driver Code
int main()
{
    int N,k;
    cout<<"Enter the number of elements:"<<endl;
    cin>>N;
    int arr[N];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<N;i++)
        cin>>arr[i];
    cin>>k;
    cout<<"Before Sorting the array:"<<endl;
    display(arr,N);
    BubbleSort(arr,N,k);
    cout<<"After Sorting the array:"<<endl;
    display(arr,N);
    return 0;
}