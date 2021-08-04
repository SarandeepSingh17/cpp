#include<iostream>
using namespace std;
void display(int matrix[],int size)
{
        cout<<"Maximum Element: "<<matrix[size-1]<<endl;
        cout<<"Minimum Element: "<<matrix[0]<<endl;
}
void max_min(int matrix[],int size)
{
    int i,j,temp=0;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(matrix[j]>matrix[j+1])
            {
                temp=matrix[j];
                matrix[j]=matrix[j+1];
                matrix[j+1]=temp;
            }
        }
    }
}
int main()
{
    cout<<"Enter the size of array"<<endl;
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array"<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    max_min(arr,n);
    display(arr,n);
}