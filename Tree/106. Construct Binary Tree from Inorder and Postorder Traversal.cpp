/*
---Leetcode Link--- https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
*/

   int postIndex;
    
    TreeNode* buildTreeUtil(vector<int>& inorder, vector<int>& postorder,int is,int ie ){
        if(is>ie){
          return NULL;  
        }
        postIndex = postorder.size()-1;
        postorder.pop_back();
        TreeNode* root = new TreeNode(postorder[postIndex]);
        
        int inIndex;
        for(int i=is; i<=ie; i++){
            if(inorder[i]==root->val){
               inIndex = i;
               break; 
            }
        }
        
        root->right = buildTreeUtil(inorder,postorder,inIndex+1,ie);
        root->left = buildTreeUtil(inorder,postorder,is,inIndex-1);
        
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      TreeNode* ans = buildTreeUtil(inorder,postorder,0,inorder.size()-1);
      return ans;  
    }
};
