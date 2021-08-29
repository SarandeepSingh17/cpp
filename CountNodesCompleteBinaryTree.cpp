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
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};
int main()
{
    Solution ob;
    struct TreeNode* root=new TreeNode(0);
    root->left=new TreeNode(1);
    root->right=new TreeNode(2);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->left=new TreeNode(5);
    cout<<ob.countNodes(root)<<endl;
    return 0;
}