#include<bits/stdc++.h>
using namespace std;
  struct TreeNode 
  {
      int val;
     TreeNode *left;
      TreeNode *right; 
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  class Solution
  {
      int preindex=0;
      TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start, int end)
      {
          
          
          if(start>end)
            return NULL;
          int index=0;
          TreeNode* root=new TreeNode(preorder[preindex++]);
          for(int i=start;i<=end;i++)
          {
              if(inorder[i]==root->val)
              {
                  index=i;
                  break;
              }
          }
          root->left=solve(preorder,inorder,0,index);
          root->right=solve(preorder,inorder,index+1,end);

          return root;
      }
      public:
      TreeNode* buildTree(vector<int>preorder)
      {
          vector<int> inorder;
          int n=preorder.size();
          for(auto it: preorder)
          {
              inorder.push_back(it);
          }
          sort(inorder.begin(),inorder.end());
        return solve(preorder,inorder,0,n-1);
      }
  };
  void inorder(TreeNode* root)
  {
      if(root==NULL)
      {
          return;
      }
      inorder(root->left);
      cout<<root->val;
      inorder(root->right);

  }
 int main()
 {
     int n;
     cin>>n;

     vector<int> preorder(n);
     for(int i=0;i<n;i++)
     {
         cin>>preorder[i];
     }
    Solution ob;
    TreeNode* root=ob.buildTree(preorder);
    inorder(root);
     return 0;
 }
