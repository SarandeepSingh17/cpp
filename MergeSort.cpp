#include<bits/stdc++.h>
using namespace std;
int merge(int arr[], int l, int mid , int r)
{
 int n1=mid-l+1;
 int n2=r-mid;
long long inv=0;                                //counting inversions

 int a[n1];    //temp arrays
 int b[n2];

 for(int i=0;i<n1;i++)
 {
     a[i]=arr[l+i];
 }
 for(int i=0;i<n2;i++)
 {
     b[i]=arr[mid+1+i];
 }

 int i=0,j=0,k=l;                         //i is the starting pointer to 'a[0]' array and j to 'b[0]' k is the pointer to resultant array  
 while(i<n1 &&j<n2)
 {
     if(a[i]<b[j]) //
     {
         arr[k]=a[i];
         k++;
         i++;
     }
     else{
         arr[k]=b[j];
         k++;
         j++;
         inv+=n1-i;
     }
 }
 while(i<n1)
 {
  arr[k]=a[i];
         k++;
         i++;   
 }
 while(j<n2)
 {
     arr[k]=b[j];
         k++;
         j++;
 }
 return inv; 
}
void mergesort(int a[],int l,int r)
{  
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
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
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}