#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i ,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l, int r)
{
 int pivot=arr[l]; 
 int i=l;         
 int j=r;
 while(i<j)
 {
 while(arr[i]<=pivot)      
     i++;
 while(arr[j]>pivot)
     j--;
 if(i<j)
     swap(arr,i,j);
 }
  swap(arr,j,l);
    return j;
}
void QuickSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        QuickSort(arr,l,pi-1);
        QuickSort(arr,pi+1,r);
    }
}
int main()
{
    int arr[]={5,4,3,2,1};
    int l,r;
    cin>>l>>r;
    QuickSort(arr,l,r);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}