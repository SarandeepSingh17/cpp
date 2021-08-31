#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node* left;
    Node* right;
    Node(int data)
    {
        val=data;
        left=NULL;
        right=NULL;
    }
};
int finddist(Node* root, int k, int dist)
{
    if(root==NULL)
        return -1;
    if(root->val==k)
        return dist;
    int leftDist=finddist(root->left,k,dist+1);
    if(leftDist!=-1)
        return leftDist;
    return finddist(root->right,k,dist+1);
}

Node * LCA(Node* root, int n1, int n2)
{
    if(root==NULL)
    return NULL;
    if(root->val==n1 || root->val==n2)
        return root;
    Node* left=LCA(root->left,n1,n2);
    Node* right=LCA(root->right,n1,n2);
    if(left && right)
        return root;
    if(left!=NULL)
        return left;
    return right;
    
}
int distBtwNodes(Node* root, int n1, int n2)
{
    Node* lca=LCA(root,n1,n2);
    int d1=finddist(lca, n1,0);
    int d2=finddist(lca, n2,0);

    return d1+d2;
}
int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);
    //  Node* node= LCA(root,6,7);
    // cout<<node->val<<endl;
    cout<<distBtwNodes(root,4,5);
    return 0;
}