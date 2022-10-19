/*
---Leetcode LINK--- https://leetcode.com/problems/binary-tree-level-order-traversal-ii/submissions/
*/

   vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        stack<vector<int>> st;
        if(root==NULL){
            return ans;
        }
    
        while(!q.empty()){
            int size = q.size();
            vector<int> data;
            while(size>0){
                TreeNode* temp = q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->right){
                   q.push(temp->right); 
                }
                if(temp->left){
                   q.push(temp->left); 
                }
                size--;
            }
            st.push(data);
        }
           while(!st.empty()){
               ans.push_back(st.top());
               st.pop();
           } 
        return ans;
    }
