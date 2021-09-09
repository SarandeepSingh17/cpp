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
void solve(Node* root, Node** first, Node** mid, Node** last, Node** prev)
{
    if(root==NULL)
        return;
    solve(root->left,first,mid,last,prev);
    if(*prev && root->val<(*prev)->val)
    {
        if(!*first)
        {
            *first= *prev;
            *mid = root;
        }
        else
        {
            *last=root;
        }
    }
    *prev=root;
    solve(root->right,first,mid,last,prev);
}
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void RestoreBST(Node* root)
{
    Node* first, *mid, *last, *prev;
    first= NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;

    solve(root,&first,&mid,&last,&prev);
    if(first && last)
    {
        swap(&(first->val),&(last->val));
    }
    else if(first && mid)
    {
        swap(&(first->val),&(mid->val));
    }

}
void inorder(Node* root)
{
    if(root==NULL)
        return;
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
}
int main()
{

    Node* root=new Node(6);
    root->left=new Node(9);
    root->right=new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->right=new Node(13);

    inorder(root);
    cout<<endl;
    RestoreBST(root);
    inorder(root);

    return 0;

}