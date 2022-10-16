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

// APPROACH -2 (BEST)

    int res=0;
    int height(TreeNode* root){
        if(root==NULL){
          return 0;  
        }
        int lh = height(root->left);
        int rh = height(root->right);
        
        res = max(res,lh+rh);
        return 1+max(lh,rh);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int data = height(root);
        return res;
    }
