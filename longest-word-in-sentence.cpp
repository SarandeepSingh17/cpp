#include<bits/stdc++.h>
using namespace std;
int main()
{ 
     int n;
     cin>>n;
     cin.ignore();
     char arr[n+1];
     cin.getline(arr,n);
     cin.ignore();
     int curr=0,max=0,st=0,maxst=0;
     for(int i=0;i<n;i++)
     {
        if (arr[i]==' ' || arr[i]=='\0')
        {
            if(curr>max)
            {
                max=curr;
                maxst=st;
            }
            curr=0;
            st=i+1;
        }
        else
            curr++;
     }
     cout<<max<<endl;
     for (int i=0;i<max;i++)
     {
         cout<<arr[maxst+i];
     }
    return 0;
}