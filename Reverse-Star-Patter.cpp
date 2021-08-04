#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N,i,j,k;
	cin>>N;
	for(i=1;i<=N;i++)
	{
	    for(j=N;j>i;j--)
	    {
	    cout<<" ";
	    }
    for(k=1;k<=j;k++)
    {
        cout<<"*";
    }
    cout<<"\n";
	}
	return 0;
}
