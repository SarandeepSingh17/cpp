#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int arr[33]={0};
    for(ll i=0;i<n;i++)
    {
        int j=32;
      while(a[i]>0)
      {
        arr[j]+=a[i]%2;
        j--;
        a[i]/=2;
      }
    }
    ll ans=0;
    for(ll i=0;i<33;i++)
    {
     if(arr[i]%k==0)
     {
        ans+= arr[i]/k;
      }
   else
   {
   ans+= arr[i]/k;
   ans++;
   }
    }
  cout<<ans<<endl;
  }
  return 0;
}