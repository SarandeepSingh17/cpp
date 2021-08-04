#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N,i,j,c=0,k;
	cin>>N;
	for(i=1;i<=N;i++)
	{
	    if(i%2==0)
	        {
	        for(k=1;k<=5;k++)
	        {
	         cout<<c<<" ";
	         --c;
	        }
	        cout<<"\n";
	        }
	        else
	        {
	    for(j=1;j<=5;j++)
	    {       
	            ++c;
	            cout<<c<<" ";
	            
	   }
	   cout<<"\n";
	    }
	    c=c+5;
	}
	return 0;
}
