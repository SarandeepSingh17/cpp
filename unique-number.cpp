#include<iostream>
using namespace std;
/*int unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum= xorsum^arr[i];
    }
    return xorsum;
}*/
int setBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}
void unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum= xorsum^arr[i];
    }
    int setbit=0;
    int pos=0;
    int tempxor=xorsum;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum>>=1;
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newxor=(newxor^arr[i]);
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
 }
int main()
{
int arr[]={1,2,3,1,2,3,4,5};
unique(arr,8);
    return 0;
}