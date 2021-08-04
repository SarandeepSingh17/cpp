#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                if(x!=a[i])
                {   
                    cout<<x<<endl;
                    return 0;
                }
                    x++;
            }
        }
    return 0;
}