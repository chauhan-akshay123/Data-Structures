/*
---Leetcode LINK--- https://leetcode.com/problems/diameter-of-binary-tree/ 
*/

  int maxHeight(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return max(maxHeight(root->left),maxHeight(root->right)) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
          return 0; 
        }
        int d1 = maxHeight(root->left)+maxHeight(root->right);
        int d2 = diameterOfBinaryTree(root->left);
        int d3 = diameterOfBinaryTree(root->right);
        return max(d1,max(d2,d3));
    }
