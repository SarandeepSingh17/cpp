#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < m; i++)
            cin >> b[i];
        long long max=1e9;
        ll ans = 0;
        for (ll i=0;i<m;i++)
        {
            if(a[b[i]-1]==0)
            {
                for(ll j=0;j<n;j++)
                {
                    if(a[j]==1)
                    {
                        ans=b[i]-(j+1);
                        max=min(max,ans);
                    }
                    else if(a[j]==2)
                    {
                        if((j+1)-b[i]>=0)
                            ans=(j+1)-b[i];
                        max=min(max,ans);
                    }
                }
                if(max>0)
                    cout<<max<<" ";
                else
                    cout<<"-1"<<" ";
            }
            else if(a[b[i]-1]>0)
            {
                ans=0;
                cout<<ans<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
