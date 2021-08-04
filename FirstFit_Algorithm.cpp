// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int p,b,psize[10],bsize[10],i,j,allocation[10],flags[10];
    for(i = 0; i < 10; i++)
	{
		flags[i] = 0;
		allocation[i] = -1;
	}
    cout<<"Enter the number of Process and Blocks respectively"<<endl;
    cin>>p>>b;
    cout<<"Enter size of each Process"<<endl;
    for(i=0;i<p;i++)
        cin>>psize[i];
    cout<<"Enter size of each Block"<<endl;
    for(i=0;i<b;i++)
        cin>>bsize[i];
    for(i = 0; i < p; i++)         
    {
	for(j = 0; j < b; j++)
	{
		if(flags[j] == 0 && bsize[j] >= psize[i])
		{
			allocation[j] = i;
			flags[j] = 1;
			break;
		}
	}
    }
   cout<<"\nBlock no.\tBlock size\t\tprocess no.\t\tProcess size";
	for(i = 0; i < b; i++)
	{
		cout<<"\n"<< i+1<<"\t\t"<<bsize[i]<<"\t\t\t";
		if(flags[i] == 1)
			cout<<allocation[i]+1<<"\t\t\t"<<psize[allocation[i]];
		else
			cout<<"Not allocated";
	}
    return 0;
}
