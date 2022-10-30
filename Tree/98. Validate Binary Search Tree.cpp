/*
---Leetcode LINK--- https://leetcode.com/problems/validate-binary-search-tree/
*/

  bool helper(TreeNode* root,long low ,long high){
        // Empty trees are valid BSTs.
        if(root == NULL){
            return true;
        }
        
        // Condition of Binary Search Tree 
        // left side node values of the root should be less value than the root and right side should be greater
        // If that is true check recursivley for the root child's
        
        if((root->val < high) && (root->val > low)){
          return (helper(root->left, low, root->val) && helper(root->right, root->val, high));

        }else{
            //if this root node violates the min/max constraint
            return false;
        }
        
    }
    
    bool isValidBST(TreeNode* root) {
        bool ans = helper(root, LONG_MIN, LONG_MAX);
        return ans;
    }
