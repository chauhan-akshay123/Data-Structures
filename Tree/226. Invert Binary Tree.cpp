/*
---Leetcode LINK--- https://leetcode.com/problems/invert-binary-tree/  
*/

  TreeNode* invertTree(TreeNode* root) {
    TreeNode* ans;
      stack<TreeNode*> st;
      st.push(root);
        
      while(!st.empty()){
          TreeNode* temp = st.top();
          st.pop();
          if(temp!=NULL){
             st.push(temp->left);
             st.push(temp->right);
             swap(temp->left,temp->right);
          }
      }  
      return root;
    }
