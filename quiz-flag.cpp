#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k; // n is user, m is admin , k is no of attempts 
        cin>>n>>m>>k;
        vector<ll> vec;
        ll element;
        for(int i=0;i<k;i++)
        {
            cin>>element;
            vec.push_back(element);
        }

        vector<ll> count(n);
        for(int i=0;i<n;i++)
            count[i]=0;
        
        for(int j=0;j<k;j++)
        {
            if(vec[j]<=n)
            {
                count[vec[j]-1]++;
            }
        }

        int flag=0;
        vector<ll> a;
        for(int j=0;j<n;j++)
        {
            if(count[j]>1)
            {
                flag++;
                a.push_back(j+1);
            }
        }
             cout<<flag<<" ";
         for(int i=0;i<a.size();i++)
           {
            cout<<a[i]<<" ";
            }
            cout<<endl;
          }  
    return 0;
}