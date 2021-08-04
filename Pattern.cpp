#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    for(int i=1;i<n+1;i++)
    {
        for(int j=c;j<c+n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        if(i==(floor((n+1)/2)))
        {
            if(n%2!=0)
            {
                c=n*(n-2)+1;
            }
            else{
                c=n*(n-1)+1;
            }
        }
        else if(i>floor((n+1)/2))
        {
                c=c-2*n;
        }
        else{
                c=c+2*n;
            }
        }
    return 0;
}