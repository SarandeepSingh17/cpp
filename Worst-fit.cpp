#include <iostream>
using namespace std;
int main() {
    int p,b,i,j,x,allocation[10],flags[10],temp;
    for(i = 0; i < 10; i++)
	{
		flags[i] = 0;
		allocation[i] = -1;
	}
    cout<<"Enter the number of Process and Blocks respectively"<<endl;
    cin>>p>>b;
    int index[b],psize[p],bsize[b];
    cout<<"Enter size of each Process"<<endl;
    for(i=0;i<p;i++)
        cin>>psize[i];

    cout<<"Enter size of each Block"<<endl;
    for(x=0;x<b;x++)
    {
        cin>>bsize[x];
        index[x]=x;
    }
    for(i=0;i<b-1;i++)                         //Bubble Sorting- block Process Array
    {
        for(j=0;j<b-i-1;j++)
        {
            if(bsize[j]<bsize[j+1])
            {
                 temp=bsize[j];
                bsize[j]=bsize[j+1];
                bsize[j+1]=temp;

                temp=index[j];
                index[j]=index[j+1];
                index[j+1]=temp;
            }
        }
    }

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
		cout<<"\n"<< index[i]+1<<"\t\t"<<bsize[i]<<"\t\t\t";
		if(flags[i] == 1)
			cout<<allocation[i]+1<<"\t\t\t"<<psize[allocation[i]];
		else
			cout<<"Not allocated";
	}
    return 0;
}
