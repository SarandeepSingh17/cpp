#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int len;
            if(((n*(n+1))/2)%2==0)
            {
                cout<<n<<endl;
            }
            else
            {
                cout<<n-1<<endl;
            }
    }   
    
    return 0;
}