/*
---Leetcode LINK--- https://leetcode.com/problems/search-in-a-binary-search-tree/
*/

TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans = NULL;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
          return ans;  
        }
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->val == val){
               ans = temp;
                break;
            }
            else{
                if(temp->left){
                   q.push(temp->left); 
                }
                if(temp->right){
                   q.push(temp->right); 
                }
            }      
        }
        return ans;
    }
