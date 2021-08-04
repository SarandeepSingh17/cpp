#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cout<<"Enter word"<<endl;
    cin>>arr;
    bool check=1;
    for(int i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==1)
    cout<<"Palindrome Word!"<<endl;
    else
    cout<<"Not Palindrome Word!"<<endl;
}