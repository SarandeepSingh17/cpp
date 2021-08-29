#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
    queue<TreeNode *> q;
    vector<int> level;
    int idx=0;
public:
    int maxLevelSum(TreeNode* root) {
        if(root == NULL)
        return idx;
    q.push(root);
    
    while(!q.empty())
    {
        int size=q.size();
        int sum=0;
        for(int i=0;i<size;i++)
        {
            TreeNode* node=q.front();
            sum+=node->val;
            q.pop();
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        level.push_back(sum);
    }
        int max=INT_MIN;
    for(int j=0;j<level.size();j++)
    {
        if(level[j]>max)
        {
            max=level[j];
            idx=j;
        }
    }
    return idx+1;
    }
};
int main()
{
    struct TreeNode* root=new TreeNode(1);
    root->right=new TreeNode(0);
    root->left=new TreeNode(7);
    root->left->right=new TreeNode(-8);
    root->left->left=new TreeNode(7);
    Solution ob;
    int ans=ob.maxLevelSum(root);
    cout<<ans<<endl;
    return 0;
}