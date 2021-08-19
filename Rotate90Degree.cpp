#include<iostream>
#include<vector>
using namespace std;
void  rotate(vector <vector <int>>& arr)
{
 int n=arr.size();
 int a[n][n];                                                   //resultant array
 for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;j++)
        {
           a[i][j]=0;                                           //Initializing to 0
        }
    }
 
 
    int j=0;
    int i=0;
 for(int col=n-1;col>=0;col--)
{
    for(int row=0;row<n;row++)
    {
        a[i][j]=arr[row][col];
        j++;
    }
    i++;
    j=0;
}
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<vector <int>> arr(n, vector<int>(n));
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cin>>arr[i][j];
        }
    }
    rotate(arr);
    }
    return 0;
}