#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPalindrome(int n)
{
    int temp=n, num=0;
    while(temp)
    {
        num=num*10+ temp%10;
        temp/=10;
    }
    if(num==n)
        return true;
    return false;
}
int findPalindromicSubarray(vector<int> arr, int k)
{
    int num=0;
    for(int i=0;i<k;i++)
    {
        num=num*10+arr[i];
    }
    if(isPalindrome(num))
        return 0;
    for(int j=k;j<arr.size();j++)
    {
        // removing first digit using mod, sliding window technique 
        num = (num%(int)pow(10,k-1))*10 + arr[j]; 
        if(isPalindrome(num))
        {
            return j-k+1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = { 2,3,5,1,1,5};
    int ans= findPalindromicSubarray(arr,4);
    if(ans==-1)
    {
        cout<<"Palindrom subarray doesn;t exist";
    }
    else
    {
        for(int i=ans;i<ans+4;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}