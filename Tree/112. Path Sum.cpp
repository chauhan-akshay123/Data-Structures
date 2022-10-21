
/*
---Leetcode LINK--- https://leetcode.com/problems/path-sum/
*/

   bool hasPathSum(TreeNode* root, int targetSum) {
         if(root==NULL){
            return false; 
         }
        bool ans = false;
        int subSum = targetSum - root->val;
        
        if(subSum==0 && root->left==NULL && root->right==NULL){
          return true; 
        }
        
        if(root->left){
           ans = ans || hasPathSum(root->left,subSum); 
        }
        if(root->right){
          ans = ans || hasPathSum(root->right,subSum); 
        }
        
        return ans;
    }
