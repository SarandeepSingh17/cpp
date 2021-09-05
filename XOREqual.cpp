#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        unordered_map<ll, ll> mpp;
        unordered_map<ll, ll> m2;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        ll maxVar = 0, mn = 0;
        if (n == 1)
        {
            cout << "1"<< " "<< "0" << endl;
            continue;
        }
        for (auto it : mpp)
        {
            if (it.second == n)
            {
                maxVar = n;
                break;
            }
            if (it.second >= maxVar)
            {
                maxVar = it.second;
            }
        }
        if (x == 0)
        {
            cout << maxVar << " " << mn << endl;
            continue;
        }
        for (ll i = 0; i < n; i++)
        {
            m2[arr[i]^x]++;
        }
        for (auto it : mpp)
        {
            auto t = m2.find(it.first);
            if (t != m2.end())
            {
                if (it.second + m2[it.first] > maxVar)
                {
                    maxVar = it.second + m2[it.first];
                    mn = min(it.second, m2[it.first]);
                }
                else if (it.second + m2[it.first] == maxVar)
                {
                    if (min(it.second, m2[it.first]) < mn)
                    {
                        mn = min(it.second, m2[it.first]);
                    }
                }
            }
        }
        cout << maxVar << " " << mn << endl;
    }
    return 0;
}