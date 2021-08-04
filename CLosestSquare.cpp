#include <iostream>
#include <cmath>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> closestPerfectSquare(int n){
    // Write your code here.
   int a = sqrt(n);
    int b = sqrt(n) + 1;
    vector <int> v;
    if ((n - (a * a)) < (b * b) - n)
    {
        v.push_back((a*a));
        v.push_back(n - (a * a));
    }
    else
    {
        v.push_back(b*b);
        v.push_back((b * b) - n);
    }
    return v;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<closestPerfectSquare(n)<<endl;
    }
}
