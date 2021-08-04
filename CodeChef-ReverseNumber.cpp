#include<iostream>
using namespace std;
//Driver-Code
int main()
{
    int T,i,N,a=0,rev=0;
    cin>>T;
    int arr[T];
    for(i=0;i<T;i++)
    {
        cin>>N;
        arr[i]=N;
    }
    for(i=0;i<T;i++)
    {
    while(arr[i]!=0)
    {
        a=arr[i]%10;
        rev=rev*10+a;
        arr[i]/=10;
    }
    cout<<rev<<endl;
    rev=0;
    }
    return 0;
}