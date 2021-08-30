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
void sumReplace(Node * root)
{
    if(root==NULL)
        return;
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left!=NULL)
    {
        root->val+=root->left->val;
    }
    if(root->right!=NULL)
    {
        root->val+=root->right->val;
    }
}
void Preorder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->val<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    Preorder(root);
    cout<<"\n";
    sumReplace(root);
    Preorder(root);
    return 0;
}