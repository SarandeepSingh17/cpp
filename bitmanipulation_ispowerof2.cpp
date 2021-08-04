#include<bits/stdc++.h>
using namespace std;
bool ispowerof2(int n)
{
    return (n && !(n & n-1));
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    
    cin>>n;
   cout<<ispowerof2(n);
    return 0;
}