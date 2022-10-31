/*
---Leetcode LINK--- https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
*/

  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p || root==q){
          return root; 
        }
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        
        if(left==NULL){
           return right; 
        }
        if(right==NULL){
           return left;  
        }
        // if both of them are not NULL then we have found our common
        else{
            return root;
        }
    }
