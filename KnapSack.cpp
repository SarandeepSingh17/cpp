#include<iostream>
using namespace std;
int knapsack(int value[],int wt[], int n, int W)
{
    if(n==0 || W==0 )
    {
        return 0;
    }
    if(wt[n-1]>W)
    {
        return knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
}
int main()
{
    int n;
    cin>>n;                            //no of items
    int value[n];                     //value of each items
    int wt[n];                       //weight of each items
    int W;                          //Capacity of Knapsack
    cin>>W;
    for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    cout<<knapsack(value,wt,n,W)<<endl;
    return 0;
}