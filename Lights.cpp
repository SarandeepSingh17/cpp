#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                arr[i]=1;
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]==1)
                    {
                        arr[j]=0;
                    }
                    else
                    {
                        arr[j]=1;
                    }
                }
                flag++;
            }
            
        }
        cout<<flag<<endl;
    return 0;
}