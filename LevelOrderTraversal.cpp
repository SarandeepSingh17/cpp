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
class Solution
{
    vector<vector<int>> ans;
    queue<Node *> q;
public:
vector<vector<int>> levelOrder(Node* root)
{
    
    if(root == NULL)
        return ans;
    q.push(root);
    
    while(!q.empty())
    {
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++)
        {
            Node* node=q.front();
            q.pop();
            if(node->left)
            {
                q.push(node->left);
            }
        if(node->right)
         {
                q.push(node->right);
            }
            level.push_back(node->val);
        }
        
            ans.push_back(level);
    }
    return ans;
}
};
int main()
{
    Solution ob;
    struct Node * root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    vector<vector<int>> ans= ob.levelOrder(root);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}