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
    int calcDiameter(TreeNode* root, int *height)
    {
        if(root==NULL)
        {
            *height=0;
            return 0;
        }
        int lh=0,rh=0;
        int lDiameter=calcDiameter(root->left,&lh);
        int rDiameter=calcDiameter(root->right,&rh);
        int currDiameter=lh+rh;
        *height=max(lh,rh)+1;
        
        return max(currDiameter,max(lDiameter,rDiameter));
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int height=0;
        int diameter=calcDiameter(root,&height);
        return diameter;
        
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
    cout<<ob.diameterOfBinaryTree(root)<<endl;
    return 0;
}