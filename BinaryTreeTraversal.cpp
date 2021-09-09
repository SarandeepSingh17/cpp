#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
/***************************Recursion****************/
// void preorder(struct Node* root)
// {
//     // if(root == NULL)
//     // {
//     //     return;
//     // }
//     // cout<<root->data<<" ";
//     // preorder(root->left);
//     // preorder(root->right);
// }
vector<int> ans;
vector<int> preorderTraversal(Node* root) {
        if(root==NULL)
            return ans;
        stack<Node*> nodeStack;
        nodeStack.push(root);
        
        while(!nodeStack.empty())
        {
            struct Node* Node=nodeStack.top();
            ans.push_back(Node->data);
            nodeStack.pop();
            
            if(Node->right)
            {
                nodeStack.push(Node->right);
            }
            if(Node->left)
            {
                nodeStack.push(Node->left);
            }
        }
        return ans;
    }
void inorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void postorder(struct Node * root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
int main()
{
    struct Node* root= new Node(4);
    root->left=new Node(2);
    root->right=new Node(7);
    root->left->left=new Node(1);
    root->left->right= new Node(3);


    vector<int> ans = preorderTraversal(root);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    // inorder(root);
    // postorder(root);
    return 0;
}