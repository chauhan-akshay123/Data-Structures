/*
---Leetcode Link--- https://leetcode.com/problems/sum-root-to-leaf-numbers/
*/

int sumUtil(TreeNode* root,int val){
        if(root==NULL){
           return 0; 
        }
        
        val = (val*10 + root->val);
        
        if(root->left==NULL && root->right==NULL){
           return val; 
        }
        return sumUtil(root->left,val)+sumUtil(root->right,val);
    }
    
    int sumNumbers(TreeNode* root) {
        int ans = sumUtil(root,0);
        return ans;
    }
