/*
---Leetcode LINK--- https://leetcode.com/problems/insert-into-a-binary-search-tree/
*/

  TreeNode* newNode(int data){
        TreeNode* temp = new TreeNode();
        temp->val = data;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
           return newNode(val); 
        }
        if(val<(root->val)){
          root->left = insertIntoBST(root->left,val);  
        }
        else if(val>root->val){
            root->right = insertIntoBST(root->right,val);
        }
        return root;
    }
