#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

int main()
{
    int a[5]={2,4,3,1,5};
    bubbleSort(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}