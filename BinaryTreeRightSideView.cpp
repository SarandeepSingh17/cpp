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
public:
    vector<int> rightSideView(TreeNode* root)
    {   vector<int> ans;
        if(root==NULL){
return ans;
}
queue<TreeNode*>q;
q.push(root);
while(!q.empty()){

        int size = q.size();
        for(int i=0;i<size;i++){
            TreeNode* node= q.front();
            q.pop();
            
            if(i==size-1){
            ans.push_back(node->val);
            }
            if(node->left){
                q.push(node->left);
            }
             if(node->right){
                q.push(node->right);
            }
        }
        
    }
    return ans;
}
};
int main()
{
    struct TreeNode* root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->left=new TreeNode(5);
    Solution ob;
    vector<int> ans=ob.rightSideView(root);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}