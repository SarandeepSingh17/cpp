#include<iostream>
#include<climits>
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
struct Info
{
    int size;
    int mx;
    int mn;
    int ans;
    bool isBst;
};
Info largestBSTinBT(Node* root)
{
    if(root==NULL)
    {
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL)
    {
        return {1,root->val,root->val,1,true};
    }
    Info left = largestBSTinBT(root->left);
    Info right = largestBSTinBT(root->right);

    Info curr;     //curr root Info

    curr.size=(1+left.size+right.size);

    if(left.isBst && right.isBst  && root->val>left.mx  && root->val<right.mn)
    {
        curr.mn = min(left.mn,right.mn,root->val);
        curr.mx = max(left.mx,right.mx,root->val);

        curr.ans= curr.size;
        curr.isBst=true;

        return curr;
    }
    curr.ans=max(left.ans,right.ans);
    curr.isBst=false;
    return curr;
}

int main()
{
    /*
        15
        /
       20
        \ 
    */
   Node* root =new Node(15);
   root->left= new Node(20);
   root->right = new Node(30);
   root->left->left= new Node(5);

   cout<<"Largest BST in BT : "<<largestBSTinBT(root).ans<<endl;

   return 0;
}