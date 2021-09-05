#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node * right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

vector<Node*> constructTrees(int start, int end)
{
    vector<Node*> trees;
    if(start>end)
    {
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++)
    {
        vector<Node*> leftSubTrees = constructTrees(start,i-1);
        vector<Node*> rightSubTrees = constructTrees(i+1,end);

        for(int j=0;j<leftSubTrees.size();i++)
        {
            Node* left=leftSubTrees[j];
            for(int k=0;k<rightSubTrees.size();k++)
            {
                Node* right =rightSubTrees[k];
                Node* node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

int main()
{


    return 0;

}