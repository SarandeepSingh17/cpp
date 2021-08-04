#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int size=2*n-1;
    int number=n;
    for(int i=0;i<(2*n-1);i++)
    {
        for(int j=0;j<(2*n-1);j++)
        {
            for(int k=j;k<size;k++)
            {
                cout<<number<<" ";
                number--;
                size=size-1;
            }
        }
        cout<<endl;
    }
    return 0;
}