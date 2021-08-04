#include<bits/stdc++.h>
using namespace std;
class solution
{
    int age;
public:
string name;
void setname(int s)
{
    age=s;
    cout<<age<<endl;
}
~solution()
{
    cout<<"Destructor Called"<<endl;
}
};
int  main()
{
    solution ob;
    ob.setname(19);
    int n;
    cin>>n;
    solution arr[n];
    for(int i=0;i<n;i++)
    {
        solution arr[i];
    }
    return 0;
}