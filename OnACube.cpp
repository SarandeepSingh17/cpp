#include<bits/stdc++.h>
#define pi 3.14 
using namespace std;
float x,y,z;
float short_dist(float x,float y, float z);
int main()
{
    int n;
    cin>>n;
    int N=3*n;
    float a[N];
    float ans=0.0;
    for(int i=0;i<N;i++)
        cin>>a[i];
    x=a[0];
    y=a[1];
    z=a[2];
    
    for(int i=3;i<N;i+=3)
    {
        ans+=short_dist(a[i],a[i+1],a[i+2]);
    }
    cout<<setprecision(2)<<fixed;
    cout<<ans;
    return 0;
}
float short_dist(float a, float b, float c)
{
    float dis=0.0;
    if(z==c && (x==a || y==b) && z!=0)
    {
        if(x!=a)
        {
            dis=(2*pi*abs(a-x))/6;
        }
        else if(y!=b)
        {
            dis=(2*pi*abs(b-y))/6;
        }
    }
    else
    {
        dis=(int)sqrt(pow((a-x),2)+pow((b-y),2))+abs(c-z);
    }
    x=a,y=b,z=c;
    return dis;
}