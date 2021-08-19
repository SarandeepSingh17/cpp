#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n, m,q;
        cin>>n>>m>>q;
        int check[n]={0};
        bool b=true;
        int f=0;
        while (q--)
        {
            char ch;
            int i;
            cin>>ch>>i;
            
            if(f>m)
            {
                b=false;
            }
            if(ch=='+')
            {
                if(check[i-1]==1)
                {
                    b=false;
                }
                else
                {
                   check[i-1]=1;
                    f++; 
                }
            }
            else if(ch=='-')
            {
                if(check[i-1]==0)
                {
                    b=false;
                }
                else
                {
                    check[i-1]=0;
                    f--;
                }
            }
            
        }
        if(b)
        {
            cout<<"consistent"<<endl;
        } 
        else
        {
            cout<<"Inconsistent"<<endl;
        }
    }
    return 0;
}